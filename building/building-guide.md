# Building Stand.dll

Build guide for this fork. Alternate auth and post-build state copies: `building/different-state-backups/`.

End-to-end instructions for compiling Stand from source. Assumes Windows x64.

---

## 1. Repository layout

Clone three repos as **siblings** under one parent folder:

```
parent/
├── Stand-OSS/
├── Soup/
└── Soup-Lua-Bindings/
```

---

## 2. Install tools

### Visual Studio

Install **Visual Studio 2022 or later** with:


| Item                                       | Required                                                                           |
| ------------------------------------------ | ---------------------------------------------------------------------------------- |
| Workload: **Desktop development with C++** | Yes                                                                                |
| **MSVC Build Tools for x64/x86 (Latest)**  | Yes — provides the MSVC toolset Stand needs (**v145** on VS 2022 17.10+ / VS 2026) |
| **C++ Clang tools for Windows**            | Yes                                                                                |
| **C++ Clang Compiler for Windows**         | Yes                                                                                |
| **Windows 10/11 SDK**                      | Yes                                                                                |


### PHP

1. Download from [php.net/downloads.php](https://www.php.net/downloads.php) → Windows → **VS17 x64 Non Thread Safe** zip (any PHP 8.x).
2. Extract in `C:\php`
3. Add path to `php.exe` to your Enviornment Varible User PATHs.
4. Copy `php.ini-development` → rename copy to`php.ini`.
5. Inside `php.ini` set `memory_limit = 2G` (font generators need it).

---

## 3. Toolchain


| Project               | Solution              | Config                             | Platform | Toolset                                              |
| --------------------- | --------------------- | ---------------------------------- | -------- | ---------------------------------------------------- |
| Soup                  | `Soup/Soup.sln`       | **ReleaseDLL**                     | x64      | **LLVM (clang-cl)** — default; do not switch to MSVC |
| ScriptHookV           | `Stand-OSS/Stand.sln` | **Release**                        | x64      | ClangCL                                              |
| ISaidNoRTTI           | `Stand-OSS/Stand.sln` | **Release**                        | x64      | ClangCL                                              |
| Third-Party Libraries | `Stand-OSS/Stand.sln` | **Debug or Release** (match Stand) | x64      | **v145**                                             |
| Stand                 | `Stand-OSS/Stand.sln` | **Debug or Release** (match TPL)   | x64      | **v145** — not ClangCL                               |


**Stand must use MSVC v145**, not ClangCL (SEH macros and exception settings are MSVC-only). **Soup must stay ClangCL.**

Third-Party Libraries and Stand must use the **same** Debug or Release config.

---

## 4. Build order

### Step 1 — Build Soup

Open `Soup/Soup.sln` → set **ReleaseDLL | x64** → Build **Soup**.

Verify: `Soup/bin/ReleaseDLL x64/Soup.lib`

### Step 2 — Build Stand dependencies

Open `Stand-OSS/Stand.sln` → build each:


| Project               | Config    | Output             |
| --------------------- | --------- | ------------------ |
| ScriptHookV           | **Release | x64** (once)       |
| ISaidNoRTTI           | **Release | x64** (once)       |
| Third-Party Libraries | **Debug   | x64** or **Release |


ScriptHookV and ISaidNoRTTI are not linked into Stand — build Release once and you're done.

### Step 3 — MakeSpriteFont.exe

`Default Theme/MakeSpriteFont.exe` is not included — build it yourself from DirectXTK.

1. Clone [microsoft/DirectXTK](https://github.com/microsoft/DirectXTK)
2. Open `DirectXTK_Desktop_2022.sln` → build **MakeSpriteFont** (Release | Any CPU)
3. Copy `MakeSpriteFont/bin/Release/MakeSpriteFont.exe` → `Stand-OSS/Default Theme/`

### Step 4 — PHP generators

Open a terminal in **Stand-OSS repo root** (where `Stand.sln` lives):

```bat
lang\_update.bat
```

Then run:

```bat
php generate_bin.php
php generate_font_bevietnamprolight.php
php generate_font_nanumgothic.php
php generate_font_yahei.php
php xormagics.php
```

Generated files: `Stand/bin.cpp`, `Stand/bin.hpp`, `Stand/font_*`, `Stand/lang_*.cpp`, `Stand/xormagics.hpp`.

If `generate_bin.php` failed midway, delete partial `Stand/bin.cpp` and `Stand/bin.hpp` before retrying.

### Step 5 — Build Stand.dll

In `Stand-OSS/Stand.sln` → **Debug  x64** or **Release  x64** (match Step 2) → Build **Stand**:


| Config    | Output |
| --------- | ------ |
| **Debug   | x64**  |
| **Release | x64**  |


First full build may take time and a decent amount of RAM.

---

## 5. Release post-build

Original Release/Dev configs ran: `xormagics.php` → rename DLL → **ISaidNoRTTI** → **Virtualizer** → **UPX**.

This fork **removed Virtualizer and UPX** from the Release post-build because they're not required and just commercial tools, which would of made post-build fail without them. The current config's post-build runs **ISaidNoRTTI only**. Menu/features work the same; only packing and obfuscation differ (\~10 MB) vs (\~20 MB). Alternate state copies are in `building/different-state-backups/release-post-build-compiler-calls/`.

### Switching post-build style


| Folder                         | Purpose                                                                                |
| ------------------------------ | -------------------------------------------------------------------------------------- |
| `without-virtualizer-and-upx/` | ISaidNoRTTI only — **matches live `Stand/Stand.vcxproj` by default**                   |
| `with-virtualizer-and-upx/`    | Full `Stand.vcxproj` with commercial post-build — requires Virtualizer + UPX installed |


To use commercial post-build: copy `with-virtualizer-and-upx/Stand.vcxproj` → `Stand-OSS/Stand/Stand.vcxproj`, then rebuild Release.

To revert: copy `without-virtualizer-and-upx/Stand.vcxproj` → `Stand-OSS/Stand/Stand.vcxproj`, then rebuild Release.

---

## 6. Auth modes

**Default stand.sh auth** (paste key). Alternate auth state copies are in `building/different-state-backups/auth-default-vs-patched/`.


| Folder     | Behavior                                                                                             |
| ---------- | ---------------------------------------------------------------------------------------------------- |
| `default/` | **Default stand.sh auth** — paste activation key in-game. `conf.hpp` targets current server version. |
| `patched/` | Heartbeat disabled; local unlock via secret dev menu (no [stand.sh](http://stand.sh) server call).   |


Copy files to `Stand-OSS/Stand/` when switching: `Auth.cpp`, `main.cpp`, `conf.hpp`. Rebuild after copying.

**Default stand.sh auth:** Activate tab → Paste Activation Key.

**Patched bypass:** Open Stand Menu → enter the Konami code (arrow keys): **Up → Up → Down → Down → Left → Right → Left → Right** → **Super Secret Shit** → **Auth** → **Switch To Ultimate Edition**.

**Patch notes:**

- Switch To Ultimate Edition applies silently — no success notification
- An error notification may briefly occur; the Activate tab may remain. Loading Online still grants full menu access
- Must repeat patch steps each inject

---

## 7. Version strings

Set in `Stand/conf.hpp`:

- `STAND_VERSION_TARGET` — Stand version shown in menu. **Default stand.sh auth** may care about matching the current release for key validation.
- `GTA_VERSION_TARGET` — Target GTA build.

Debug builds append a dev suffix (e.g. `-devdbg`).

---

## 8. Injecting the DLL

Load via Stand Launchpad. For self-built binaries, use **Advanced mode** → add DLL by full path.

---

## 9. Common errors


| Error                                   | Fix                                                                                                                                            |
| --------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
| Missing `Soup.lib` / includes           | Wrong folder layout; build Soup ReleaseDLL x64                                                                                                 |
| `MakeSpriteFont.exe` not found          | Build from DirectXTK (Step 3)                                                                                                                  |
| PHP memory exhausted                    | `memory_limit = 2G` in `php.ini`                                                                                                               |
| LNK2019 `__std_find_not_ch_1`           | Stand toolset too old vs Soup — use **v145** for Stand                                                                                         |
| 300+ errors building Stand with ClangCL | Stand is MSVC-only — use **v145**, not ClangCL                                                                                                 |
| Soup won't compile on MSVC              | Keep Soup on **ClangCL**                                                                                                                       |
| C1047 on Release link                   | Rebuild Third-Party Libraries with **v145**, then Stand                                                                                        |
| Post-build: Virtualizer not found       | Use ISaidNoRTTI-only post-build (§5)                                                                                                           |
| Activation stuck on "Validating..."     | Built with **patched** auth — switch to the **default** auth state copy in `building/different-state-backups/auth-default-vs-patched/default/` |


---


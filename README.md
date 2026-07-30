## Stand Mod Menu For GTA V

The ultimate trainer for Stealy V-eely Automobiley, allowing you to finally become a **Stand User**!

## Credits

**You better show respect and simply give these repo's a star, it goes a long way for developers!!**

[Stand](https://stand.sh/) - The most polished mod menu for GTA V  
**[Calamity, Inc.](https://github.com/calamity-inc)** - The Stand Dev, released & maintains the Stand source code, [see & ★ repo](https://github.com/calamity-inc/Stand-OSS)  
**[Nuiiv (nui)](https://github.com/nuiiv)** - Fixed `Invalid Model Sync` issue, created the patcher, & some more misc fixes, [see & ★ repo](https://github.com/nuiiv/Stand-OSS)  
**[landn.thrn](https://github.com/landnthrn)** - Creator/organizer of [CoaLwiX](https://github.com/landnthrn/CoaLwiX), compiled & released the built `.dll`'s, building guide, & setup guide

## Fork Note

> Forked from [nuiiv](https://github.com/nuiiv)'s fork, whom created the fix for the `Invalid Model Syncs` issue & a patch for menu edition/activation authentication  
> In this fork the patcher was reversed to default authentication, but still includes a backup of files in the patch state, see [building guide](building/building-guide.md) to learn how to reverse back to patch build. A `.dll` is also provided in [releases](https://github.com/landnthrn/Stand-OSS/releases/) which includes the patcher.
>
> This fork includes an updated `readme.md`, a `building-guide.md`, some helpful state-alteration backups for easy switching use cases, and some small tweaks I needed in order to build the `.dll`s.  
> [Releases](https://github.com/landnthrn/Stand-OSS/releases/) have the compiled `.dll` types to save you the trouble of building.  

## Quick Start

- See [Releases](https://github.com/landnthrn/Stand-OSS/releases/)
- Download `release.zip` or `release-patch-included` which contains the `Stand x.x.x.dll`
- Follow simple setup guide written in releases page

## See Also



### [COALWIX FOR STAND](https://github.com/landnthrn/CoaLwiX)

#### [>JUST SEE WHAT YOU CAN DO<](https://www.youtube.com/watch?v=6w-lV45EIHQ)

### FULL ALL-IN-ONE COLLECTIONS OF:

- 40 Menu Profiles  
- Profile Alterations  
- Modded Vehicles  
- Modded Outfits  
- Construct Spawns  
- Easy Teleporting Places  
- Headers + Themes  
- Lua Scripts

### [JOIN COALWIX DISCORD SERVER](https://discord.gg/J6jWpru9nS)

- **Central Hub for GTA Modders**
- **Share Files • Mod Support • Keep Up to Date**  
- **Get loaded with Menu Addons, Lua scripts, Vehicles, Outfits, All in One Packs, & more**

# Building Info

### Dependencies

Clone these as **siblings** of this repo (same parent folder):

- [Soup](https://github.com/calamity-inc/Soup) — branch `senpai`
- [Soup-Lua-Bindings](https://github.com/calamity-inc/Soup-Lua-Bindings) — branch `main`

Make sure you have a flat folder structure, such that Stand and its dependencies have the same parent folder.

### Prerequisites


| Requirement                     | Notes                                                                                                                               |
| ------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- |
| **Visual Studio 2022 or later** | Workload: **Desktop development with C++**                                                                                          |
| **MSVC Build Tools (Latest)**   | For Stand and Third-Party Libraries (use **v145** toolset on recent VS)                                                             |
| **C++ Clang tools for Windows** | Soup, ScriptHookV, and ISaidNoRTTI use **clang-cl**                                                                                 |
| **Windows 10/11 SDK**           | Ships with the C++ workload                                                                                                         |
| **PHP 8.x**                     | [php.net/downloads.php](https://www.php.net/downloads.php) → **VS17 x64 Non Thread Safe** zip; set `memory_limit = 2G` in `php.ini` |


**Toolchain rule:** Soup = **ClangCL**. Stand + Third-Party Libraries = **MSVC v145**. Do not build Stand with ClangCL.

**MakeSpriteFont.exe** — build from [DirectXTK](https://github.com/microsoft/DirectXTK) and copy to `Default Theme\`. Required for `generate_bin.php`.

### Building

1. Build **Soup** (`Soup.sln`) — config **ReleaseDLL  x64**
2. Open **Stand.sln** — build **ScriptHookV** and **ISaidNoRTTI** (**Release  x64**, once). Build **Third-Party Libraries** (**Debug  x64** or **Release  x64**, match config you plan to use in step 5).
3. Run `lang\_update.bat`
4. Run the PHP generators from repo root:
  ```bat
  php generate_bin.php
  php generate_font_bevietnamprolight.php
  php generate_font_nanumgothic.php
  php generate_font_yahei.php
  php xormagics.php
  ```
5. Build **Stand** (**Debug  x64** or **Release  x64**, match config used in step 2)

**Output:** `Stand\bin\Debug\Stand.dll` or `Stand\bin\Release\Stand.dll`

**Release post-build:** This fork **removed Virtualizer and UPX** from the Release post-build because they're not required and just commercial tools, which would of made post-build fail without them. The current config's post-build runs **ISaidNoRTTI only**. Menu/features work the same; only packing and obfuscation differ (\~10 MB) vs (\~20 MB). Alternate state copies are in `building\different-state-backups\release-post-build-compiler-calls\`.

**Auth:** **Default stand.sh auth** (paste key). Alternate auth state copies are in `building\different-state-backups\auth-default-vs-patched\`.

### [Full step-by-step build guide](building/building-guide.md)

## Updating

Every once in a while, Rockstar will actually bother to change this game, which will make all mod menus unusable until they are updated. In order to update Stand to a new GTA version, the following changes must be made:

- [x] **Sigs.**
- [x] **ASI Game Version.**

And for major updates:

- [x] **Crossmap.**
- [x] **Peds.**
- [x] **Vehicles.**
- [x] **Weapons.**
- [x] **Native Tables.** From decompiled scripts with up-to-date crossmap.
- [x] **Script Funcs.**
- [x] **Script Locals.**
- [x] **Script Globals.**
- [x] **Script Globals in MusinessBanager.**
- [x] **Script Events.**
- [x] **Session Scripts.**
- [x] **Asset Hashes.**

Additionally, structs may be off; [ReClassEx64](https://github.com/ajkhoury/ReClassEx) and Cheat Engine will help update them.
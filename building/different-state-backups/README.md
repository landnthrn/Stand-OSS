# different-state-backups

Switchable snapshots for two independent use cases. Tracked artifacts are the `.zip` files; unzipped state folders are gitignored for local/dev use.

## How to use

1. Keep the `.zip` files in git.
2. To switch a state: unzip the chosen zip **next to** the zip (same directory), so files land in the named folder (`default/`, `patched/`, etc.).
3. Copy files from that folder into the live tree as `location.txt` describes.
4. After editing a state, recreate its zip from the unzipped folder so the archive stays current.

## Topics

### auth-default-vs-patched

- `default.zip` / `default/` — stock stand.sh authentication (`Auth.cpp`, `conf.hpp`, `main.cpp`, …).
- `patched.zip` / `patched/` — no-auth / patched auth variant for local builds.

### release-post-build-compiler-calls

- `without-virtualizer-and-upx.zip` — Release post-build without Virtualizer/UPX (`Stand.vcxproj`).
- `with-virtualizer-and-upx.zip` — Release post-build with Virtualizer/UPX (`Stand.vcxproj`).

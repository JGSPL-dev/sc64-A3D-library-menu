# SC64 A3D Library Menu 1.5.1

A 3DOS-style menu for the SummerCart64, designed for the Analogue 3D. Unofficial fan project built with CLAUDE, not affiliated with Analogue, Nintendo or the SummerCart64 / N64FlashcartMenu developers.

## What's new in 1.5.1

**64DD disks get their own Analogue 3D settings**

* Stand-alone 64DD disks (Mario Artist, SimCity 64, Doshin the Giant and others) used to count as "SummerCart64" on the Analogue 3D and inherit its display settings. Now each disk can have its own settings and Memories, and appear in the Analogue 3D's Library.
* This is **Signature Boot**: just before a disk boots on its own, the menu puts a small cartridge header carrying the disk's game code into the cartridge space, which a disk boot doesn't use. It's on for every disk; you can turn it off per disk in **C▶ → Analogue 3D**.
* To set a disk up, use **C▶ → Analogue 3D → Create Analogue 3D Entry** once, and copy `/a3d/Library` to the Analogue 3D's card as with ROM hack entries. The disk then appears in the Analogue 3D's Library with its title, release year and grey cart. Without an entry it still shows as SummerCart64.
* Entries for the released disks (Mario Artist, SimCity 64, Doshin the Giant, Japan Pro Golf Tour 64, Randnet) include the release year, so the Analogue 3D no longer shows 1970.
* Already made an entry for a disk with a test build? To add its year, create the entry again and copy **only `library.json`** into that disk's folder on the Analogue 3D's card. Leave its `settings.json` alone, or the disk's display settings go back to the defaults.
* A disk's signature is the same every time, and never matches a real game in `labels.db`, the SummerCart64 or a blank cartridge.
* Expansion disks played with their cartridge (F-Zero X + Expansion Kit) are unchanged and keep using the cartridge's settings.

**Disk Options**

* Disk Options now works like Configure: it opens on the categories on the left (**Options**, **Analogue 3D**, **Disk Info**). B in a category goes back to the categories, and B there leaves.
* **Delete Disk** in Options (press A twice). The disk is removed from the folder, History and Favorites; its save and the Game Pak cartridge are kept.

**Known issues**

* After a 64DD game, RESET may need pressing twice to get back to the menu. This comes from the stock N64FlashcartMenu.
* 64DD disks show a blank disk in the Library: there's no label art for disks yet.

## Install

1. Download `SC64-Library-Menu-1.5.1.zip` below and unzip it.
2. Back up the `sc64menu.n64` from your SD card root to your PC or Mac.
3. Copy `install/sc64menu.n64` to the SD card root. If you're new to the menu, also copy `install/menu/library.ini` to the card's `menu` folder. If you're upgrading, keep your existing `library.ini`.
4. Optional: copy `/Library/N64/Images/labels.db` from your Analogue 3D card to `/menu/labels.db`.
5. On the Analogue 3D, set the SummerCart64 to Display mode Clean, Image size Fill, Image fit Stretch.
6. 64DD games need the 64DD IPL files in `/menu/64ddipl` (see N64FlashcartMenu's 64DD guide).

Settings → About should show version `0.3.5-library-1.5.1`. Full instructions are in the README. Requires SummerCart64 firmware 2.17 or newer.

**Checksum**
`sc64menu.n64` SHA-256: `bca04f2a29691b88175a3d50c0911b3cce51b1ddb66d3832710543b05cf7c799`

**Licence**
AGPL-3.0 (based on N64FlashcartMenu 0.3.5). Full source is in the zip under `source/`. No label artwork or ROMs are included.

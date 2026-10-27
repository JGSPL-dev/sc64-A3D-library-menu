# SC64 A3D Library Menu 1.4

A 3DOS-style menu for the SummerCart64, designed for the Analogue 3D. Unofficial fan project built with CLAUDE, not affiliated with Analogue, Nintendo or the SummerCart64 / N64FlashcartMenu developers.

## What's new in 1.4

**64DD**
- **One press to play:** A on a disk boots it straight away. Stand-alone disks (Mario Artist, SimCity 64, Doshin the Giant…) boot on their own.
- **64DD Game Pak:** on an expandable cartridge (F-Zero X, Zelda: Ocarina of Time, Mario Party, Pokémon Stadium 1 and 2 Japan, Dezaemon 3D), press C▶ → Hardware → **Use as 64DD Game Pak**, then A on its expansion disk to boot the pair. C▲ in the Library clears it.
- If an expansion disk has no matching Game Pak, the menu says which cartridge and region it needs, and offers to boot the disk alone.
- **Disk Options** (C▶ on a disk, also from History and Favorites): an Options tab with Play Disk, Play with Game Pak and a Favorite switch, and a scrolling Disk Info tab.
- ROM + disk pairs in History and Favorites boot in one press.
- Only folders named DD, 64DD or N64DD (as a separate word) get the disk shape.

**Library**
- **Cleaner cart labels:** the label fills the cart's window, which has an arched top and a thin medium grey outline. The cart art has clean edges.
- **Start-up folder:** Menu Settings → Start In, or C▶ → Open this folder at start-up on the folder row.
- **Hide and unhide folders** from the folder row (C▶), and **Show Hidden Folders** in Menu Settings (hidden folders show dimmed).
- **Show Saves:** one switch for the saves folder and save files. Save files show their game's label.
- **Show Text Files** opens `.txt` files in a new text viewer. **Show Cheat Files** is in a game's Configure → Cheats.
- **Delete Game** in Configure → Customization (press A twice). Deleting other files asks you to confirm first.
- Controller Pak backups (`.mpk` / `.mpkn`) show in the Library so you can restore them.
- The A–Z bar puts names starting with a number or symbol under #.

**3DOS style everywhere**
- Restyled: About, N64 Information, Flashcart Information, Date & Time (view and adjust), Controller Pak manager and restore, Datel code editor, File Details, archive extract, text viewer, error screen and the Expansion Pak warning.
- Only the image viewer, music player and emulator loading screens still use the stock layout.

**Fixes and tidying**
- Fixes both known limitations listed for 1.3: setting a cartridge as the 64DD Game Pak now has its own option (no more C▶ then B workaround), and start-up folders have their own setting.
- Every Menu Settings switch now does something. "Show Hidden Files" is now **Show System Files**.
- Settings list selection bars line up on every row.
- Datel editor: the value editor shows only its 4 digits.
- Controller Pak: up/down choose the controller, and buttons that do nothing without a Pak are hidden.
- Cancelling the Expansion Pak warning returns to the Library.

**Known issue**
- After a 64DD game, RESET may need pressing twice to get back to the menu. This comes from the stock N64FlashcartMenu.

## Install

1. Download `SC64-Library-Menu-1.4.zip` below and unzip it.
2. Back up the `sc64menu.n64` from your SD card root to your PC or Mac.
3. Copy `install/sc64menu.n64` to the SD card root. If you're new to the menu, also copy `install/menu/library.ini` to the card's `menu` folder. If you're upgrading from 1.3, keep your existing `library.ini`.
4. Optional: copy `/Library/N64/Images/labels.db` from your Analogue 3D card to `/menu/labels.db`.
5. On the Analogue 3D, set the SummerCart64 to Display mode Clean, Image size Fill, Image fit Stretch.
6. 64DD games need the 64DD IPL files in `/menu/64ddipl` (see N64FlashcartMenu's 64DD guide).

Settings → About should show version `0.3.5-library-1.4`. Full instructions are in the README. Requires SummerCart64 firmware 2.17 or newer.

**Checksum**
`sc64menu.n64` SHA-256: `1fd3ca9975e982bac599523b54c35bcd7d39de1fb6d3dfb819b85e974fa5eac7`

**Licence**
AGPL-3.0 (based on N64FlashcartMenu 0.3.5). Full source is in the zip under `source/`. No label artwork or ROMs are included.

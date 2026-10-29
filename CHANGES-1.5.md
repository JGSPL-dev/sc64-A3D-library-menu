# SC64 A3D Library Menu 1.5

A 3DOS-style menu for the SummerCart64, designed for the Analogue 3D. Unofficial fan project built with CLAUDE, not affiliated with Analogue, Nintendo or the SummerCart64 / N64FlashcartMenu developers.

## What's new in 1.5

**Cart colours**

* Games start in their **original cartridge colour**: gold Majora's Mask and Ocarina of Time, yellow Donkey Kong 64 and Tony Hawk's Pro Skater 2, blue Tony Hawk's Pro Skater, black Turok 2 and more (41 North American coloured carts).
* Colours follow the region: PAL and Australian copies are coloured only where those releases were (Majora's Mask, Pokémon Stadium 2, Turok 2). Japanese carts are grey.
* **Cart Colour** in Configure → Customization: Original, or grey, black, red, green, blue, yellow, gold, silver, purple or pink. Saved per game, and shown in the Library, History, Favorites and the loading screen.

**Sharper labels**

* Labels are scaled once when they load to their true shape (56×86 on screen), instead of being stretched every frame, and drawn pixel for pixel. Text and edges on labels are cleaner, with less banding.
* The cart is drawn slightly narrower, so its label window is exactly the label's size: no gaps and no stretching.

**Analogue 3D settings for ROM hacks**

* ROM hacks and homebrew (such as Smash Remix) used to inherit the SummerCart64's display settings. Now they can have their own.
* **C▶ → ROM Info**, scrolled to the bottom, shows the game's Analogue 3D **Signature**, and **Create Analogue 3D Entry** writes a ready-made folder (`library.json` and `settings.json`) to `/a3d` on the SummerCart64's card.
* Copy `/a3d/Library` from the SummerCart64 SD card to the Analogue 3D's card. The game then boots with its own settings, which you can change and which are remembered, and it appears in the Analogue 3D's Library.
* Optional: put a `settings.json` from a game you've set up the way you like in `/a3d/template/`, and every new entry uses your settings. If you don't add one, each game first boots in Clean mode at 4:3; change it to your preferred settings once and it remembers them.
* An entry only needs creating once per game, but each new version of a hack needs its own (Smash Remix 2.0 and 3.0 have different signatures, for example).
* Labels: the entry doesn't include label art. To show a label for a hack in 3DOS, make one yourself and add it to your Analogue 3D's own `labels.db` under the game's signature (the community labels.db editor can do this).

**Known issues**

* After a 64DD game, RESET may need pressing twice to get back to the menu. This comes from the stock N64FlashcartMenu.
* 64DD disk images still use the SummerCart64's display settings.
* 64DD disks show a blank disk in the Library: there's no label art for disks yet.

## Install

1. Download `SC64-Library-Menu-1.5.zip` below and unzip it.
2. Back up the `sc64menu.n64` from your SD card root to your PC or Mac.
3. Copy `install/sc64menu.n64` to the SD card root. If you're new to the menu, also copy `install/menu/library.ini` to the card's `menu` folder. If you're upgrading, keep your existing `library.ini`.
4. Optional: copy `/Library/N64/Images/labels.db` from your Analogue 3D card to `/menu/labels.db`.
5. On the Analogue 3D, set the SummerCart64 to Display mode Clean, Image size Fill, Image fit Stretch.
6. 64DD games need the 64DD IPL files in `/menu/64ddipl` (see N64FlashcartMenu's 64DD guide).

Settings → About should show version `0.3.5-library-1.5`. Full instructions are in the README. Requires SummerCart64 firmware 2.17 or newer.

**Checksum**
`sc64menu.n64` SHA-256: `d9293569da24f9b123850bbfed462d663ae3ba6976d299d98c3374ebd0fead42`

**Licence**
AGPL-3.0 (based on N64FlashcartMenu 0.3.5). Full source is in the zip under `source/`. No label artwork or ROMs are included.


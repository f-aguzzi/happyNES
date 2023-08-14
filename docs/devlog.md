# Day one: Aug 12, 2023

## Starting point

I copied and pasted the code from a previous project, the `af6502` emulator I
coded last year.

My CPU emulator lacks the code to emulate the 6502 decimal mode, but the 6502
clone used in the NES doens't have a decimal mode either, so my old emulator is
good enough as a starting point to build upon.

The first issues come with building a system bus. My original CPU emulator just
had one single block of memory, while the NES had a main system bus with access
to multiple components.

I will need to add new classes to model the system.

## The PPU

I'm not going to start working on the PPU until I get the system bus up and
running.

My idea is to make this a WASM project, and have the PPU write the image in an
HTML canvas. I don't want to mess with graphics libraries unless it's strictly
necessary.

#ifndef NUMBERS_h
    #include "numbers.hpp"
    #define NUMBERS_h
#endif

#ifndef MEMORY_h
    #include "memory.hpp"
    #define MEMORY_h
#endif

#ifndef PPU_h
    #include "../PPU/ppu.hpp"
    #define PPU_h
#endif

#ifndef CARTRIDGE_h
    #include "../Cartridge/cartridge.hpp"
    #define CARTRIDGE_h
#endif


class Bus
{
    private:
    Memory memory;
    PPU ppu;
    Cartridge cartridge;

    public:
    Bus();
    ~Bus();

    public:
    byte readBus(hword address);
    void writeBus(hword address, byte data);
};

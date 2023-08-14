#ifndef BUS_h
    #include "bus.hpp"
    #define BUS_h
#endif

Bus::Bus()
{
    memory.init();
}

byte Bus::readBus(hword address)
{
    // RAM
    if (address >= 0 && address <= 0x1FFF)
    {
        return memory[address % 0x0800];
    }
    // PPU
    else if (address >= 0x2000 && address < 0x3FFF)
    {
        return ppu.CPUbusRead(0x2000 + address % 8);
    }
}

void Bus::writeBus(hword address, byte data)
{
    // RAM
    if (address >= 0 && address <= 0x1FFF)
    {
        memory.WriteByte(address % 0x0800, data);
    }
    // PPU
    else if (address >= 0x2000 && address < 0x3FFF)
    {
        ppu.CPUbusWrite(0x2000 + address % 8, data);
    }
}

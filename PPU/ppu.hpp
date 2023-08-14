#ifndef NUMBERS_h
    #include "../CPU/numbers.hpp"
    #define NUMBERS_h
#endif

class PPU
{


    public:
    byte CPUbusRead(hword address);
    void CPUbusWrite(hword address, byte data);
};
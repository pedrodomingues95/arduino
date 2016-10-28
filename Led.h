#ifndef Led_H
#define Led_H

#if defined(ARDUINO) && ARDUINO < 100
#include "WProgram.h"
#else
#include "Arduino.h"
#endif

const int MIN_VALUE = 0;
const int MAX_VALUE = 1024;



 class Led{
public:
    Led(byte,pino);
   // Led(byte,pino,int setores);


    void acender();
    void apagar();
    void inverter();

    void acender(int x);
    void piscar(int x, int y);

    bool  isAceso();
    bool  isPwm();

private:
    byte led;
    int estado;

};
#endif

#include "Led.h"

Led::Led(byte led){
this->led=led;
}


 void Led::acender(){
 digitalWrite(this->led,HIGH);
 estado=1;
 }

  void Led::apagar(){
 digitalWrite(this->led,LOW);
 estado=0;

 }

  void Led::inverter(){
  if (estado==0){
 digitalWrite(this->led,HIGH);
 estado=1;
 }
 if (estado==1){
 digitalWrite(this->led,LOW);
 estado=0;
 }
 }

 void Led::piscar(int x, int y){
 //converter segundos em milissegundos
 int mili=y*1000;


 for (int i=0; i<x;i++){
 digitalWite(this->led,HIGH);
 delay(mili);
 digitalWite(this->led,LOW);
 delay(mili);
        }


void Led::acender(int x){
 digitalWrite(this->led,x);
}

bool Led::isAceso(){
bool status;
if(estado==0){
status=false;
}
if(estado==1){
status=true;
}

return status;
}

//falta verificar se é pwn

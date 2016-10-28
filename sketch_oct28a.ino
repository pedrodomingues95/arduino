#include "Led.h";

Led led=Led(10);
Led led=Led(11);
Led led=Led(12);

void setup() {
  // put your setup code here, to run once:
Led l1(10);
Led l2(11);
Led l3(12);
}

void loop() {
  l1.acender();
  l2.apagar();
  l3.inverter();

  l2.acender(224);
  l3.piscar(224,5);

//FAZER ISACESSO E ISPWN
  //l1.isAceso();

}

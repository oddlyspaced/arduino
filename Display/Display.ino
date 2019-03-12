#include "TM1637.h"

TM1637 tm1637(3,2);

void setup() {
  // put your setup code here, to run once:
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL); 
  //BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
 
  delay(1500);//Delay to let system boot
  Serial.begin (9600);

}

void loop() {
    int i = 0;
    for (i = 0; i < 100; i++) {
      tm1637.display (0, i);
      Serial.println(i);
      delay(3000);
    }
}

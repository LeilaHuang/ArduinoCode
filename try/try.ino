#include "Pin.h"

int i;
// define myPin1-6
Pin pinOne(1);
Pin pinTwo(2);
Pin pinThree(3);
Pin pinFour(4);
Pin pinFive(5);
Pin pinSix(6);

Pin myPin[6] = {pinOne, pinTwo, pinThree, pinFour, pinFive, pinSix};

void setup() {
  Serial.begin(9600);
  //make all the pin high-impedance state
  for (i = 0; i < 7; i++) {
    pinMode(myPin[i].pinNum, INPUT);
  }

}//end setup

void loop() {

  Serial.println("aaaa");
  //check if the port(pushButton) is been connected or not
  for (i = 0; i < 7; i++) {
    int a = digitalRead(myPin[i].pinNum);
    if (a == 1) {
      Serial.println(myPin[i].pinNum);
    }//end if
  }//end for



}



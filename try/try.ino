//nihao
//int pushButton = 7; 

int i;
// define myPin1-6  
int pinOne=1;
int pinTwo=2;
int pinThree=3;
int pinFour=4;
int pinFive=5;
int pinSix=6;

void setup() {
  Serial.begin(9600);
  //INPUT means high-impedance state
  // pinMode(pushButton, INPUT);
  //make all the pin high-impedance state
  pinMode(pinOne, INPUT);
  pinMode(pinTwo, INPUT);
  pinMode(pinThree, INPUT);
  pinMode(pinFour, INPUT);
  pinMode(pinFive, INPUT);
  pinMode(pinSix, INPUT);
  
}//end setup 

void loop() {

   
   Serial.println("aaaa");
   int digialOne=digitalRead(pinOne);
   Serial.println(pinOne);  
   Serial.println(digialOne);  
   
   
  
// Serial.println(pinOne+":"+ digitalRead(pinOne));  
   delay(1);   
   Serial.println(pinTwo+":"+ digitalRead(pinTwo));  
   delay(1);  
   Serial.println(pinThree+":"+ digitalRead(pinThree));  
   delay(1);  
   Serial.println(pinFour+":"+ digitalRead(pinFour));  
   delay(1);  
   Serial.println(pinFive+":"+ digitalRead(pinFive)); 
   delay(1);   
   Serial.println(pinSix+":"+ digitalRead(pinSix)); 
   delay(1);   
  


  
  //check if the port(pushButton) is been connected or not
//  int buttonState = digitalRead(pushButton);
//  //print the state of port  
//  Serial.println(buttonState);
//  delay(1);   
}



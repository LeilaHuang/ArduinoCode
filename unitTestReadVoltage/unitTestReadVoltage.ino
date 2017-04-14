void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A5);
//  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
 // Serial.println(voltage);
  //Serial.println(sensorValue);

 if(voltage>3.3&& voltage<3.4){
   Serial.println("module 2 detected ");
 }
 else if (voltage>4.7&& voltage<4.8){
   Serial.println("module 1 detected ");
 }
 else{
   Serial.println("no module detected ");
 }

}


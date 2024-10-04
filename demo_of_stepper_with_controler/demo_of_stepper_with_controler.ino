#include<Stepper.h>
Stepper myStepper(2048, 8,10,9,11);
const int x_data=A0;const int y_data=A1;const int sw_data=13;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(A1,INPUT);
pinMode(A0,INPUT);
pinMode(13,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);pinMode(10,OUTPUT);pinMode(11,OUTPUT);
myStepper.setSpeed(10);
}
void loop() {
//   // put your main code here, to run repeatedly:
int x_data=analogRead(A0);
int y_data=analogRead(A1);
int sw_data=digitalRead(13);
// Serial.print("x-data  ");
// Serial.println(x_data);
// // Serial.print("/t");
// delay(500);
// Serial.print("     y-data");
// Serial.println(y_data);//println__print line
// Serial.print("/t");
// delay(500);
// }
controler();
}

void controler(){
//   int x_data=analogRead(A0);
// int y_data=analogRead(A1);
// int sw_data=digitalRead(10);
Serial.print("x-data  ");
Serial.println(x_data);
// Serial.print("/t");
stepper(x_data);
delay(500);
// Serial.print("y-data");
// Serial.println(y_data);//println__print line
// Serial.print("/t");
// delay(500);
}
void stepper(int x_data ){
if(x_data>=0 && x_data<=512){//for+ve x
Serial.println(x_data*2);

delay(50);}
else{
myStepper.step(-(512-x_data)*2);//for -ve x
Serial.println(-(512-x_data)*2);
delay(50);}
}


#include<Stepper.h>
//the servo motor has 2048 step
Stepper myStepper(2048, 8,10,9,11);//in1,in3,in2,in4
void setup() {
  // put your setup code here, to run once:
myStepper.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(1024);
delay(1000);
myStepper.step(-1024);
delay(1000);

}

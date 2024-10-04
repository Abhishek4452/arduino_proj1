
#include<LiquidCrystal.h>
const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal mylcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
mylcd.begin(16,2);
mylcd.print("HELLO");
}

void loop() {
  // put your main code here, to run repeatedly:
mylcd.setCursor(0,1);
mylcd.print(millis()/1000);
}

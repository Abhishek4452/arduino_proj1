#define trigpin 3
#define echopin 4
#define buzzer 5
#define led 6
long distance,duration;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
duration = pulseIn(echopin,HIGH);
//total distance=totalduration*speed of sound at room temperature
//speed of sound at 27temp =343.5m/s or (1/29.5)0.03435 cm/ms
distance=duration*0.034/2;//distance in cm
Serial.println(distance);
if(distance>=16){

Serial.println("not in range");// used to see the out put in the serial monitor

digitalWrite(led,HIGH);
delay(200);
digitalWrite(led,LOW);
delay(200);
}
else{
// digitalWrite(led,HIGH);
Serial.println("in range");//Serial.println-->> used to see the out put in the serial monitor
delay(200);
digitalWrite(buzzer,HIGH);
delay(200);
digitalWrite(buzzer,LOW);
delay(200);
}
 delay(200);


}

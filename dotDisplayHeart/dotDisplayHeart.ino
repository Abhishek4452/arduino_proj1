int n;
int low[8]={12,15,10,16,5,9,3,8};
int high[8]={1,2,6,11,7,13,14,4};
void setup() {
int pins[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1,A2};
for(int i=1; i<=16;i++){
  pinMode(pins[i],OUTPUT);
}
 for(int j=0;j<8;j++){
  digitalWrite(low[j],HIGH);
 }
 for(int k=0;k<8;k++){
  digitalWrite(high[k],LOW);
 }
}

void loop() {
digitalWrite(low[5],LOW);
digitalWrite(high[5],HIGH);
delay(1000);
digitalWrite(low[5],HIGH);
digitalWrite(high[5],LOW);
delay(1000);

}

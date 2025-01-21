// for loop Demonsration
int r=12;
int b=11;
int i;
int d=750;

void setup() {

pinMode(r,OUTPUT);
pinMode(b,OUTPUT);
}

void loop() {
  for(i=0;i<5;i++){
    digitalWrite(r,HIGH);
    digitalWrite(b,LOW);
    delay(d);
    digitalWrite(r,LOW);
    digitalWrite(b,HIGH);
    delay(d);
  }

  for(i=0;i<5;i++){
    digitalWrite(r,HIGH);
    delay(500);
    digitalWrite(r,LOW);
    delay(500);
    digitalWrite(r,HIGH);
    delay(500);
    digitalWrite(r,LOW);
    delay(d);
    
    digitalWrite(b,HIGH);
    delay(500);
    digitalWrite(b,LOW);
    delay(500);
    digitalWrite(b,HIGH);
    delay(500);
    digitalWrite(b,LOW);
    delay(d);
  }

}

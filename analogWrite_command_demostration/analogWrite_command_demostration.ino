// analogWrite command demostration
int l=12;
int dly=100;
int i;
void setup() {
  pinMode(l,OUTPUT);
}

void loop() {
  for(i=0;i<256;i++){
    analogWrite(l,i);
    delay(dly);
  }

}

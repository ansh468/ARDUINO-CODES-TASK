// Photoresistor Circuit
float v;
int pin=A0;
int rval;
int d=1000;
int r=6;
int g=5;
void setup() {
  pinMode(pin,INPUT);
  Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);

}

void loop() {
  rval=analogRead(pin);
  v= (5./1023.)*rval;
  Serial.print("v =");
  Serial.println(v);
  delay(d);
  if(v<3){
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
  }
  else{
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
  }

}

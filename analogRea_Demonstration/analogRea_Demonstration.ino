// analogRead Demonstration
float v;
int pin=A0;
int rval;
int d=1000;
void setup() {
  pinMode(pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  rval=analogRead(pin);
  v= (5./1023.)*rval;
  Serial.print("v =");
  Serial.println(v);
  delay(d);

}

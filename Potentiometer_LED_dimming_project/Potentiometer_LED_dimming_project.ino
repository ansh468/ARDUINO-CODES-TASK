//Potentiometer LED dimming project
int l=2;
int pot=A0;
float v;
int rdval;
void setup() {
pinMode(l,OUTPUT);
pinMode(pot,INPUT);
Serial.begin(9600);


}

void loop() {
rdval=analogRead(pot);
v=(255./1023.)*rdval;
analogWrite(l,v);
Serial.print("rdval = ");
Serial.println(rdval);

}

// LED Binary Counter
int l1=12;
int l2=11;
int l3=10;
int l4=9;
int dly=1000;
void setup() {
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,OUTPUT);
pinMode(l4,OUTPUT);
Serial.begin(9600);
}

void loop() {

  Serial.println("Beginning.....");
  delay(500);

  Serial.println("0");
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  delay(dly);

  Serial.println("1");
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  delay(dly);

  Serial.println("2");
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,LOW);
  delay(dly);

  Serial.println("3");
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,HIGH);
  delay(dly);

  Serial.println("4");
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  delay(dly);

  Serial.println("5");
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);

  Serial.println("6");
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,LOW);
  delay(dly);

  Serial.println("7");
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,HIGH);
  delay(dly);

  Serial.println("8");
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  delay(dly);

  Serial.println("9");
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  delay(dly);

  Serial.println("END...........");

}

// PullUP and PullDOWN Resistor Demonstration
int l1=12;
int l2=10;
int s_pu=6;
int s_pd=5;
int dr1,dr2; 
void setup() {
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(s_pu,INPUT);
  pinMode(s_pd,INPUT);
}

void loop() {
  dr1=digitalRead(s_pu);
  dr2=digitalRead(s_pd);
  Serial.print("dr1= ");
  Serial.println(dr1);
  Serial.print("dr2= ");
  Serial.println(dr2);

  if(dr1==1){
    digitalWrite(l1,HIGH);
  }
  else{
    digitalWrite(l1,LOW);
  }

  if(dr2==1){
    digitalWrite(l2,HIGH);
  }
  else{
    digitalWrite(l2,LOW);
  }

}

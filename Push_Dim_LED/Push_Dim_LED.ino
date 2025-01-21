// Push Dim LED
int s1=6;
int s2=5;
int l=4;
int b=3;
int btval_1;
int btval_2;
int ledbrt=0;
void setup()
{
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(l,OUTPUT);
  pinMode(b,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  btval_1=digitalRead(s1);
 btval_2=digitalRead(s2);
  
  Serial.print(btval_1);
  Serial.print(" ");
  Serial.println(btval_2);
  if(btval_1==0){
    ledbrt+=5;
    
  }
  if(btval_2==0){
    ledbrt-=5;
    
  }
  
  
  if(ledbrt>250){
    ledbrt=250;
  }
  if(ledbrt<0){
    ledbrt=0;
  }
  
  analogWrite(l,ledbrt);
  
  
}
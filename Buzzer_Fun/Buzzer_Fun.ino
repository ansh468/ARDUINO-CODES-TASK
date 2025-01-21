// Buzzer Fun
//A sketch to demonstrate the tone() function
//Specify digital pin on the Arduino that the positive lead of piezo buzzer is attached.
int piezoPin = 12;
void setup() {
pinMode(piezoPin,OUTPUT);
}  //close setup
void loop() {
  /*Tone needs 2 arguments, but can take three 
    1) Pin# 
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made 
    3) Duration - how long the tone plays
  */
  tone(piezoPin, 200, 500);
  delay(200);
  tone(piezoPin, 100, 500);
  delay(200);
}
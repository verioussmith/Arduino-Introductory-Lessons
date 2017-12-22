int redLED=9;
int blueLED=8;
int onTime=100;
int offTime=100;

void setup() {
  // put your setup code here, to run once:

pinMode(redLED, OUTPUT);
pinMode(blueLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,LOW);
delay(onTime);
digitalWrite(redLED,LOW);
digitalWrite(blueLED, HIGH);
delay(offTime);

}

int redLEDPin=9;   // Declaring red Led Pin as an int and set to 9
int yellowLEDPin=10;   // Decelring yellow Led Pin as an int and set it to 10
int redOnTime=100;    // This is the red on time
int redOffTime=900;   // This is the red off time
int yellowOnTime=10; // This is the yellow on time
int yellowOffTime=500;  // This is the yellow off time
int numRedBlink=5; // Number of times to blink the red led
int numYellowBlink=10;

void setup() {

  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
  
}

void loop() {

  for (int j=1; j<=numRedBlink; j=j+1) {
    digitalWrite(redLEDPin, HIGH);  // Turen the red LED on
    delay(redOnTime);   // Wait
    digitalWrite(redLEDPin, LOW); // Turn the red LED off
    delay(redOffTime); // Wait
  }

  for (int j=1; j<=numYellowBlink; j=j+1) {
    digitalWrite(yellowLEDPin, HIGH);  // Turen the yellow LED on
    delay(yellowOnTime);   // Wait
    digitalWrite(yellowLEDPin, LOW); // Turn the yellow LED off
    delay(yellowOffTime); // Wait
  }
  
}

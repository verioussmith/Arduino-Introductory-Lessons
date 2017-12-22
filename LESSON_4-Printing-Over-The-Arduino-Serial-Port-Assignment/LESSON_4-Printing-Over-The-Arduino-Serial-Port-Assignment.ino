int redLEDPin=9;   // Declaring red Led Pin as an int and set to 9
int yellowLEDPin=10;   // Declaring yellow Led Pin as an int and set it to 10
int redOnTime=250;    // This is the red on time
int redOffTime=250;   // This is the red off time
int yellowOnTime=250; // This is the yellow on time
int yellowOffTime=250;  // This is the yellow off time
int numRedBlink=5; // Number of times to blink the red led
int numYellowBlink=5;



void setup() {

  Serial.begin(115200);
  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
  
  
}

void loop() {

Serial.println("The Red LED is blinking.");

  for (int j=1; j<=numRedBlink; j=j+1) {
    Serial.print("   You are on Red Blink #: ");
    Serial.println(j);
    digitalWrite(redLEDPin, HIGH);  // Turen the red LED on
    delay(redOnTime);   // Wait
    digitalWrite(redLEDPin, LOW); // Turn the red LED off
    delay(redOffTime); // Wait
  }

Serial.println(" ");

Serial.println("The Yellow Light is blinking.");

  for (int j=1; j<=numYellowBlink; j=j+1) {
    Serial.print("   You are on Yellow Blink #: ");
    Serial.println(j);
    digitalWrite(yellowLEDPin, HIGH);  // Turen the yellow LED on
    delay(yellowOnTime);   // Wait
    digitalWrite(yellowLEDPin, LOW); // Turn the yellow LED off
    delay(yellowOffTime); // Wait
  }

Serial.println(" ");  
}

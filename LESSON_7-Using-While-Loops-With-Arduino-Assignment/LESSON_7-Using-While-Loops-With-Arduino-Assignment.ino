int redLEDPin=9;   // Declaring red Led Pin as an int and set to 9
int yellowLEDPin=10;   // Declaring yellow Led Pin as an int and set it to 10
int redOnTime=250;    // This is the red on time
int redOffTime=250;   // This is the red off time
int yellowOnTime=250; // This is the yellow on time
int yellowOffTime=250;  // This is the yellow off time
int numRedBlink; // Number of times to blink the red led
int numYellowBlink;// Number of time to blink the yellow led
String redMessage="The Red LED is Blinking"; // Declaring the String Variable
String yellowMessage="The Yellow LED is Blinking"; // Declaring the String Variable 

void setup() {
  Serial.begin(115200);
  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);

  Serial.println("How Many Times Do You Want The Red LED to Blink? ");
  while(Serial.available()==0){}
  numRedBlink = Serial.parseInt(); // Read input integer, set numRedBlink var to that number

  Serial.println("How Many Times Do You Want The Yellow LED to Blink? ");
  while(Serial.available()==0){}
  numYellowBlink = Serial.parseInt(); // Read input integer, set numYellowBlink var to that number
}

void loop() {

Serial.println(" ");

Serial.println(redMessage);
  int j=1;
  while (j<=numRedBlink) {
    Serial.print("   You are on blink #: ");
    Serial.println(j);
    digitalWrite(redLEDPin, HIGH);  // Turen the red LED on
    delay(redOnTime);   // Wait
    digitalWrite(redLEDPin, LOW); // Turn the red LED off
    delay(redOffTime); // Wait
    j=j+1;
  }

Serial.println(" ");

Serial.println(yellowMessage);
  int k=1;
  while (k<=numYellowBlink) {
    Serial.print("   You are on blink #: ");
    Serial.println(k);
    digitalWrite(yellowLEDPin, HIGH);  // Turen the yellow LED on
    delay(yellowOnTime);   // Wait
    digitalWrite(yellowLEDPin, LOW); // Turn the yellow LED off
    delay(yellowOffTime); // Wait
    k=k+1;
  }
  
}

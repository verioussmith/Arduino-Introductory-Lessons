int redLEDPin=9;   // Declaring red Led Pin as an int and set to 9
int yellowLEDPin=10;   // Declaring yellow Led Pin as an int and set it to 10
int redOnTime=250;    // This is the red on time
int redOffTime=250;   // This is the red off time
int yellowOnTime=250; // This is the yellow on time
int yellowOffTime=250;  // This is the yellow off time
int numRedBlink=10; // Number of times to blink the red led
int numYellowBlink=5;// Number of time to blink the yellow led
String redMessage="The Red LED is Blinking"; // Declaring the String Variable
String yellowMessage="The Yellow LED is Blinking"; // Declaring the String Variable 

void setup() {
  Serial.begin(115200);
  String wm1="Welcome to ";  // Declare String var and assign a value.
  String wm2="My Program."; // Declare String Variable and assigning a value
  String wm3;  // Declaring empty variable
  wm3= wm1+wm2;
  Serial.println(wm3);
  pinMode(redLEDPin, OUTPUT);
  pinMode(yellowLEDPin, OUTPUT);
}

void loop() {

Serial.println(redMessage);
  for (int j=1; j<=numRedBlink; j=j+1) {
    Serial.print("   You are on blink #: ");
    Serial.println(j);
    digitalWrite(redLEDPin, HIGH);  // Turen the red LED on
    delay(redOnTime);   // Wait
    digitalWrite(redLEDPin, LOW); // Turn the red LED off
    delay(redOffTime); // Wait
  }

Serial.println(" ");
Serial.println(yellowMessage);
  for (int j=1; j<=numYellowBlink; j=j+1) {
    Serial.print("   You are on blink #: ");
    Serial.println(j);
    digitalWrite(yellowLEDPin, HIGH);  // Turen the yellow LED on
    delay(yellowOnTime);   // Wait
    digitalWrite(yellowLEDPin, LOW); // Turn the yellow LED off
    delay(yellowOffTime); // Wait
  }
  
}

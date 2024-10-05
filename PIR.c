// Define the pins for PIR sensor and LED
int pirPin = 2;  // PIR sensor connected to digital pin 2
int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(pirPin, INPUT);  // Set PIR pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600);      // Initialize serial communication for debugging
}

void loop() {
  int pirState = digitalRead(pirPin); // Read PIR sensor output
  
  if (pirState == HIGH) {            // If motion is detected
    digitalWrite(ledPin, HIGH);      // Turn on LED
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);       // Turn off LED
    Serial.println("No motion");
  }
  
  delay(500); // Delay for half a second to avoid rapid toggling
}
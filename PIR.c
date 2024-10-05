// Define pin for the IR sensor
const int irSensorPin = 2;  // IR sensor output pin connected to pin 2
const int ledPin = 13;      // Optional: LED connected to pin 13

void setup() {
  // Set up the IR sensor pin as an input
  pinMode(irSensorPin, INPUT);
  
  // Optional: Set up the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the state of the IR sensor
  int sensorValue = digitalRead(irSensorPin);
  
  // If the sensor detects an object
  if (sensorValue == LOW) {  // Change to HIGH if your sensor uses high logic when detecting
    Serial.println("Object detected!");
    
    // Optional: Turn the LED on
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("No object detected.");
    
    // Optional: Turn the LED off
    digitalWrite(ledPin, LOW);
  }
  
  // Small delay to avoid flooding the serial monitor
  delay(200);
}

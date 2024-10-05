// Define the pins
const int soundSensorPin = A0;  // Sound sensor connected to analog pin A0
const int ledPin = 13;          // Optional: LED connected to digital pin 13

// Threshold for sound detection (adjust based on your sensor sensitivity)
int soundThreshold = 500;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the sound sensor
  int soundValue = analogRead(soundSensorPin);
  
  // Print the sound sensor value to the serial monitor
  Serial.print("Sound level: ");
  Serial.println(soundValue);
  
  // If the sound level exceeds the threshold
  if (soundValue > soundThreshold) {
    Serial.println("Sound detected!");
    
    // Optional: Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Optional: Turn off the LED
    digitalWrite(ledPin, LOW);
  }
  
  // Small delay to avoid flooding the serial monitor
  delay(200);
}

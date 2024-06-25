/*
    Project name: ESP32 Piezoelectric Sensor
    Modified Date: 25-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-piezoelectric-sensor
*/

// Analog pin connected to the piezoelectric sensor
const int piezoPin = 34; // Example GPIO pin on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the piezoelectric sensor
  int sensorValue = analogRead(piezoPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Piezoelectric Sensor Value: ");
  Serial.println(sensorValue);

  // Check if the sensor value indicates a significant vibration
  if (sensorValue > 1000) { // Adjust the threshold based on your needs
    Serial.println("Significant vibration detected!");
  }

  // Add a delay before the next reading
  delay(500);
}

// Temperature Sensing and LED Control
// Interfacing LM35 temperature sensor with Arduino Uno

// Including the necessary header files
#include <Arduino.h>

// Pin configurations
#define TEMP_SENSOR_PIN A0 // Analog pin for temperature sensor
#define LED_PIN 13         // Digital pin for LED control

// Temperature thresholds
#define LOW_TEMP_THRESHOLD 30  // Threshold for low temperature
#define HIGH_TEMP_THRESHOLD 30 // Threshold for high temperature

// LED blink intervals
#define LOW_TEMP_BLINK_INTERVAL 250  // Interval for LED blink (low temperature)
#define HIGH_TEMP_BLINK_INTERVAL 500 // Interval for LED blink (high temperature)

// Function to read temperature from LM35 sensor
float readTemperature() {
  int sensorValue = analogRead(TEMP_SENSOR_PIN);
  float temperature = (sensorValue * 5.0) / 1024.0 * 100.0; // Convert sensor value to Celsius
  return temperature;
}

// Function to control LED blink based on temperature
void controlLED(float temperature) {
  if (temperature < LOW_TEMP_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn on LED
    delay(LOW_TEMP_BLINK_INTERVAL); // Wait
    digitalWrite(LED_PIN, LOW);  // Turn off LED
    delay(LOW_TEMP_BLINK_INTERVAL); // Wait
  } else if (temperature > HIGH_TEMP_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn on LED
    delay(HIGH_TEMP_BLINK_INTERVAL); // Wait
    digitalWrite(LED_PIN, LOW);  // Turn off LED
    delay(HIGH_TEMP_BLINK_INTERVAL); // Wait
  }
}

// Initialization function
void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
}

// Main execution loop
void loop() {
  float temperature = readTemperature(); // Read temperature from LM35 sensor
  
  // Display temperature on serial monitor
  Serial.print("Current Temperature is: ");
  Serial.print(temperature);
  Serial.println(" Celsius");
  
  controlLED(temperature); // Control LED blink based on temperature
}

#define PIN_D15 15 // Voltage V1 connected to GPIO 15
#define PIN_D2 2   // Voltage V2 connected to GPIO 2

void setup() {
  Serial.begin(9600); // Initialize serial communication
  analogReadResolution(12); // Set ADC resolution (12-bit for ESP32)
}

void loop() {
  // Read raw ADC value from PIN_D15
  int rawV1 = analogRead(PIN_D15); // analogRead returns an integer value (0–4095 for 12-bit resolution)

  Serial.print("Raw value: ");
  Serial.println(rawV1);

  float temp = 0; // Initialize temp to avoid errors when the condition isn't met
    // Calculate temp using proper floating-point division
  temp = rawV1 * (15.0 / 200.0) - 62; 

  Serial.print("Temp = ");
  Serial.println(temp); // Print temp, which will remain 0 if the condition is not met

  delay(2000); // Delay for 5 seconds
}

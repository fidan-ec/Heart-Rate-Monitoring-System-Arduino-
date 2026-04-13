## Code

// Arduino Heart Rate Monitoring System

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  int heartRate = map(sensorValue, 0, 1023, 40, 120);

  Serial.print("Heart Rate: ");
  Serial.print(heartRate);
  Serial.println(" BPM");

  if (heartRate >= 60 && heartRate <= 100) {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  } else {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }

  delay(1000);
}

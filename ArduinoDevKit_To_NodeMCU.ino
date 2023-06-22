
void setup() {
  Serial.begin(115200); // Set baud rate to match the NodeMCU
}

void loop() {
  // Read sensor data or perform any other necessary actions
  int sensorValue1 = random(1000);
  int sensorValue2 = random(1000,10000);

  // Send data to NodeMCU
//  Serial.print("Sensor Value1:");
//  Serial.println(sensorValue1);
//  Serial.print("Sensor Value2:");
//  Serial.println(sensorValue2);
    String data = "sensorValue1:"+String(sensorValue1)+","+"sensorValue2:"+String(sensorValue2);
    Serial.println(data);

  delay(1000); // Adjust delay as needed
}

#include <WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  Serial.println("Scanning for WiFi networks...");
}

void loop() {
  // put your main code here, to run repeatedly:
  int n = WiFi.scanNetworks();
  for (int i = 0; i < n; i++){
    Serial.print("SSID: ");
    Serial.print(WiFi.SSID(i));
    Serial.print(" Sinal Strength: ");
    Serial.println(WiFi.RSSI(i));
  }
  delay(5000);
}

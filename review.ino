#define BLYNK_TEMPLATE_ID "TMPL3K291VkZ5" 
#define BLYNK_TEMPLATE_NAME "dht 11" 
#define BLYNK_AUTH_TOKEN "CYazXquaNAZlBSNysYVp9Stjn7j8RthN" 
#define BLYNK_PRINT Serial 
#include <ESP32WiFi.h> 
#include <BlynkSimpleEsp8266.h> 
#include <DHT.h> 
char ssid[] = "VISHISHTA"; 
char pass[] = "VIPVTLTD@"; 
#define DHTPIN D2 
// What digital pin we're connected to 
#define DHTTYPE DHT11 // DHT 11 
DHT dht(DHTPIN, DHTTYPE); 
void setup() 
{ 
Serial.begin(9600);
Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass); 
dht.begin(); 
} 
void loop() 
{ 
} 
Blynk.run(); 
float h = dht.readHumidity(); 
float t = dht.readTemperature(); 
Blynk.virtualWrite(V1, h); 
Blynk.virtualWrite(V0, t); 
delay(1000);
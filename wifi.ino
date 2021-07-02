#include<WiFi.h>
const char* ssid = "VIRUS-T_2.4G";
const char* password = "02377673004";

void setup() {
  Serial.begin(115200);
  Serial.println("Starting...");

  WiFi.begin(ssid,password);
  for(int i = 0 ;WiFi.status() != WL_CONNECTED; i++)
  {
    delay(250);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("WiFi connected");
  Serial.print("IP address : ");
  Serial.print(WiFi.localIP());
}

void loop() {
 
}

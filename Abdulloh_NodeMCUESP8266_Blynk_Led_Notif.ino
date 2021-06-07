#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "tXdLZQjx0eL1xzvryKUuth6MCuVNjq6A";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Abdul";
char pass[] = "1sampai8";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
  WidgetLED Led1(V1);
  WidgetLED Led2(V2);

  Led1.on();
  Led2.off();
  delay(1000);

  Led1.off();
  Led2.on();
  delay(1000);


}

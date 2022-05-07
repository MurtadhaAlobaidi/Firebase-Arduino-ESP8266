#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "morse-cde1f-default-rtdb.europe-west1.firebasedatabase.app"
#define FIREBASE_AUTH "uIlXWKIP1t00H8HO2rJV4hDDp9wtEUJ3gECJwYaV"
#define WIFI_SSID "ASUS_Bit"
#define WIFI_PASSWORD "J4c0b2020"


void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

//int n ;
String n;

void loop() {
  // set value
  n=Firebase.getString("logs/message");
  // handle error
  if (Firebase.failed()) {
      Serial.print("setting /number failed:");
      Serial.println(Firebase.error());  
      //return;
  } else 
  {
      Serial.println(n);
  }
  delay(1000);
}









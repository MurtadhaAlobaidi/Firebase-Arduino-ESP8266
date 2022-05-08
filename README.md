## Started connected ESP8266 with Firebase (Insert and read from Realtime Database)
## Hardware
1. [Arduino UNO](https://www.arduino.cc/en/main/arduinoBoardUno)
1. [wifi ESP8266 (Espressif ESP8266 ESP-01)](https://developers.wia.io/things/esp8266) 
1. [Breadboard](https://www.amazon.com/JBtek-Transparent-Terminal-Optimizer-Breadboard/dp/B00SSQHRC2)
1. [Jumper wires](https://www.amazon.se/Elegoo-Flerf%C3%A4rgad-Breadboard-Bandkablar-Arduino/dp/B01EV70C78/ref=asc_df_B01EV70C78/?tag=shpngadsglede-21&linkCode=df0&hvadid=476462430370&hvpos=&hvnetw=g&hvrand=8657508641988340872&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9062465&hvtargid=pla-362913641420&psc=1) 
1. [USB-A to B Cable](https://www.amazon.com/AmazonBasics-USB-2-0-Cable-Male/dp/B00NH11KIK?th=1)

## How to connecting Arduino UNO and ESP8266
<p align="center"> 
<a > <img src="https://github.com/HenningWigforss/II1302/blob/main/icons/Arbetstavla%20grupp%2014%20-%20produkt%20id%C3%A9%20(1).jpeg" alt="design" width="900" height="500"/> </a> </p>


## Software
1. [Arduino IDE](https://www.arduino.cc/en/software)
1. [Google Firebase](https://firebase.google.com)

# Start
1. Download Arduino IDE
1. Install ESP8266 Board (version 2.4.2) to Arduino IDE 
      1. Enter https://arduino.esp8266.com/stable/package_esp8266com_index.json into the Additional Board Manager URLs field.
1. Adding the Firebase [library](https://github.com/mhaao/FirebaseArduino/blob/main/FirebaseArduino.zip) 
1. Adding the ArduinoJson (version 5.13.2 ) [library](https://github.com/mhaao/FirebaseArduino/blob/main/ArduinoJson.zip)
1. Setup Firebase realtime database
1. Test 
      1. [Test](https://github.com/mhaao/FirebaseArduino/blob/main/sketch_testTheWifi.ino) connected to wifi (Board "(NodeMCU 1.0(ESP-12E Module))")
      2. [Test](https://github.com/mhaao/FirebaseArduino/blob/main/WriteToFirebase.ino) connected to firebase (insert data to Realtime Database)
      3. [Test](https://github.com/mhaao/FirebaseArduino/blob/main/ReadFromFirebase.ino) connected to firebase (Read data from Realtime Database)

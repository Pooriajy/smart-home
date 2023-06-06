/*  Connects to the home WiFi network
    Asks some network parameters
    Starts WiFi server with fix IP and listens
    Receives and sends messages to the client
    Communicates: wifi_client_01.ino
*/
#include <SPI.h>
#include <ESP8266WiFi.h>

byte ledPin = 2;
byte led5 = 16;
byte led4 = 4;
char ssid[] = "ssid";                 // SSID of your home WiFi
char pass[] = "pass";               // password of your home WiFi
WiFiServer server(8080);

IPAddress ip(192, 168, 1, 31);            // IP address of the server
IPAddress gateway(192, 168, 1, 1);        // gateway of your network
IPAddress subnet(255, 255, 255, 0);       // subnet mask of your network




void setup() {
  Serial.begin(9600);                   // only for debug
  WiFi.config(ip, gateway, subnet);       // forces to use the fix IP
  WiFi.begin(ssid, pass);                 // connects to the WiFi router
  WiFi.mode(WIFI_STA);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
  server.begin();                         // starts the server
  /*  Serial.println("Connected to wifi");
    Serial.print("Status: "); Serial.println(WiFi.status());  // some parameters from the network
    Serial.print("IP: ");     Serial.println(WiFi.localIP());
    Serial.print("Subnet: "); Serial.println(WiFi.subnetMask());
    Serial.print("Gateway: "); Serial.println(WiFi.gatewayIP());
    Serial.print("SSID: "); Serial.println(WiFi.SSID());
    Serial.print("Signal: "); Serial.println(WiFi.RSSI());
    Serial.print("Networks: "); Serial.println(WiFi.scanNetworks());*/

  pinMode(ledPin, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);
  digitalWrite(led5, HIGH);
  digitalWrite(led4, HIGH);
}

void loop () {
  WiFiClient client = server.available();

  if (client) {
    if (client.connected()) {
      digitalWrite(ledPin, LOW);  // to show the communication only (inverted logic)
      //      Serial.println(".");
      String request = client.readStringUntil('X');    // receives the message from the client
      Serial.print("From client: "); Serial.println(request);
      if (request == "ON1"){
        int var = 0;
        while(var < 20){
          digitalWrite(led5, LOW);
          digitalWrite(ledPin, LOW);
          delay(100);
          digitalWrite(led5, HIGH);
          digitalWrite(ledPin, HIGH);
          delay(100);
          Serial.println(var);
          var++;
          }
        Serial.println("ON1 recived");
      }
      if (request == "OFF1"){
        Serial.println("OFF1 recived");
        digitalWrite(led5, HIGH);
      }
      if (request == "ON2"){
        Serial.println("ON2 recived");
        digitalWrite(led4, LOW);
      }
      if (request == "OFF2"){
        Serial.println("OFF2 recived");
        digitalWrite(led4, HIGH);
      }
      client.flush();
      client.println("Command Received!"); // sends the answer to the client
      digitalWrite(ledPin, HIGH);
    }
        client.stop();                // tarminates the connection with the client
  }
}

#define FIRMWARE_VERSION "0.1"

#include <Bridge.h>
#include <Process.h>
#include <BridgeServer.h>
#include <BridgeSSLClient.h>


#include "config.h"

// Listen to the default port 5555, the Yún webserver
// will forward there all the HTTP requests you send

BridgeServer server ;
int switch1Position;
int switch2Position;
int switch3Position;
bool rainSensorStatus;



void setup() {
  Serial.begin(9600);
  Bridge.begin();
  Console.begin();
  while (!Serial);

}

void loop() {
  // put your main code here, to run repeatedly:

}

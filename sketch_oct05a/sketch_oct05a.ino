//#include <ESP8266WiFi.h>
//#include <ESP8266HTTPClient.h>
#include <ESP8266.h>   

const char* ssid = "AndroidHotspot7522";
const char* password = "jhkim7522";

void setup () {

  Serial.begin(9600);
  Serial1.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {

    delay(1000);
    Serial.print("Connecting..");

  }

}

void loop() {

  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status

    HTTPClient http;  //Declare an object of class HTTPClient

    http.begin("http://newsky2.kma.go.kr/service/ErthqkInfoService/EarthquakeReport?numOfRow=10&pageNo=1&fromTmFc=20170101&toTmFc=20170720&serviceKey=9hcf8eH%2BZNAEnWQ8bbe3h%2FOXkDM%2FWlJ7Lm6shy%2FizAtez2WFnPJ4yvkdHQadMbPi2SKRejw%2FZSJGpeTHGft%2Brw%3D%3D");  //Specify request destination
    int httpCode = http.GET();                                                                  //Send the request

    if (httpCode > 0) { //Check the returning code
      if (Serial1.available()) {
        String payload = http.getString();   //Get the request response payload
        Serial1.println(payload);                     //Print the response payload
        int the response payload
      }


    }

    http.end();   //Close connection

  }

  delay(30000);    //Send a request every 30 seconds

}

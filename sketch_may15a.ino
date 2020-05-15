#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN A0
#define DTHPIN A2
#define DHTTYPE DHT11
DHT dht(DHTTYPE, DHTPIN);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(h)||isnan(t)){
    Serial.println("não foi possivel conectar");
  }
  else{
    Serial.println("humidade:");
    Serial.println(h);
    Serial.println("temperarura:");
    Serial.println(t);
    Serial.println("ºC");
  }
}

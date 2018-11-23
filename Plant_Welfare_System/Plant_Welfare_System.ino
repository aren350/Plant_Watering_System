  #include "DHT.h"
  #include "sensors.h"
  #include <Time.h>
  #define DHTPIN 2
  #define DHTTYPE DHT22
  
  
  int Mpin=A0;
  int DHTpin=2;
  int solenoidpin=4;
  int lsensor=A1;
  double percent;
  float lux, Humidity, Temperature;
  DHT dht(DHTPIN, DHTTYPE);
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(solenoidpin, OUTPUT);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  lux=lightsensor(lsensor);
  percent=Moisturesensor(Mpin);
  DHTsensor(dht, &Humidity, &Temperature);
  
  if(percent>0 && percent<40) {
     digitalWrite(solenoidpin, HIGH);
      delay(30000);
     digitalWrite(solenoidpin,LOW);
   }
   Serial.print("Lux = ");
   Serial.println(lux);
   Serial.print("Moisture = ") ;
   Serial.print(percent); 
   Serial.print("%\n");
   Serial.print("Humidtiy = ");
   Serial.print(Humidity);
   Serial.println("%");
   Serial.print("Temperature = ");
   Serial.print(Temperature);
   Serial.println(" *C");
   Serial.println();
   Serial.println();
   delay(500);
}

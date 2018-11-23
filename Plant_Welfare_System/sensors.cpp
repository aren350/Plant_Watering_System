#include "sensors.h"
#include "DHT.h"


float lightsensor(int pin) {
	int rawvalue= analogRead(pin);
	float rawRange=1024;
	float logRange=5.0;
	float logLux = rawvalue * logRange / rawRange;
	return pow(10, logLux);
}

void DHTsensor(DHT dht, float *Humidity, float *Temperature) {
	*Humidity=dht.readHumidity();
	*Temperature=dht.readTemperature();
}

double Moisturesensor(int pin) {
	int output_value = analogRead(pin);
	return map(output_value,1023,0,0,100);
}

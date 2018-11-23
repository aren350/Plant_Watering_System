
#define SENSORS_H
#include "DHT.h"

float lightsensor(int pin);

void DHTsensor(DHT dht,float *Humidity, float *Temperature);

double Moisturesensor(int pin);

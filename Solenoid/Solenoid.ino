int solenoidPin=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(solenoidPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(solenoidPin, HIGH);
  delay(15000);
  digitalWrite(solenoidPin,LOW);
  delay(30000);
}

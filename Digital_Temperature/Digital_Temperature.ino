void setup() {
  pinMode (A0, INPUT);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float reading = analogRead (A0);
  reading = reading*(5.0/1023.0)*100;
  Serial.println (reading);
}

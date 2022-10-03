bool twoway = true;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10);
  pinMode(LED_BUILTIN, OUTPUT); // On board LED
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String str = Serial.readStringUntil('\n');
    if (str == "on") {
      digitalWrite(LED_BUILTIN, HIGH);
      if (twoway) Serial.write("Led is on")
    }
    if (str == "off") {
      digitalWrite(LED_BUILTIN, LOW);
      if (twoway) Serial.write("Led is off")
    }
  }
}

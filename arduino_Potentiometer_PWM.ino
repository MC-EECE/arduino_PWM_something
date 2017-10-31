int pot_value = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pot_value = analogRead(A0)>>2;
analogWrite(LED_BUILTIN, pot_value);
}

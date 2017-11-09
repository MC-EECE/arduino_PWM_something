int pot_value = 0; //Initializing Potentiometer Variable

void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT); //Setting Pin A) to an Input
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
pot_value = analogRead(A0)>>2;        //Writing the read-in pot value to the pot_value variable and scaling to 8 bits (divide by 4)
analogWrite(LED_BUILTIN, pot_value);  //Writing pot_value to LED
analogWrite(7, pot_value);            //Writing pot_value to pin 7
}

const int MAX_8_INT = 255;  //Setting Max Value Variable
int brightness;   //Initialize to 0 in Setup Loop
int fade_amount;  //Initialize to 1 in Setup Loop

void setup() {
  // put your setup code here, to run once:
brightness = 0;   //Assigning 0 to brightness
fade_amount = 1;  //Assigning 1 to fade amount
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_BUILTIN, brightness);   //Writing brightness to the on-board LED
analogWrite(7, brightness);             //Writing brightness to pin 7
brightness = brightness + fade_amount;  //Incrementing brightness
if (brightness == 0 or brightness == MAX_8_INT) fade_amount = -fade_amount; //Checking if brightness is at its max or min value
delay(100); //Delaying 100ms
}

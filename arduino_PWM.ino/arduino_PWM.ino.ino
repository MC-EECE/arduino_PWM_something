const int MAX_8_INT = 255;
const int dacPIN = DAC0;  //Assign Output Pin to Pin A0
int brightness;   //Initialize to 0 in Setup Loop
int fade_amount;  //Initialize to 1 in Setup Loop

void setup() {
  // put your setup code here, to run once:
brightness = 0;
fade_amount = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(LED_BUILTIN, brightness);
analogWrite(7, brightness);
brightness = brightness + fade_amount;
if (brightness == 0 or brightness == MAX_8_INT) fade_amount = -fade_amount;
delay(100);
}

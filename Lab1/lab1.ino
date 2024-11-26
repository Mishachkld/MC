const int pinLed1 = 13;
const int pinLed2 = 10;
const int pinBtn = 4;
bool isRunning = false;
bool state = false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinBtn, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(pinBtn) == LOW){
    isRunning = !isRunning;
  }
  if(isRunning){
  	digitalWrite(pinLed1, HIGH);
  	delay(300);
  	digitalWrite(pinLed1, LOW);
  	delay(100);
  	digitalWrite(pinLed2, HIGH);
  	delay(300);
  	digitalWrite(pinLed2, LOW);
  	delay(100);
  }
  else{
  	delay(1000);
  	digitalWrite(pinLed2, LOW);
  	digitalWrite(pinLed1, LOW);
  }
}
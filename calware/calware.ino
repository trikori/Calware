int motorPin = 9;

void setup() {
}

void loop() {
  int speed = 40;   //speed of the motor
  analogWrite(motorPin, speed);

}

// Motor controler code
// datatype variable_name = value;

int pwm1 = 5;
int pwm2 = 6;
int dir1 = 2;
int dir2 = 7;

void setup() {
  delay(5000);
  pinMode(pwm1, OUTPUT);
  pinMode(pwm2, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
}

void loop() {
//  write(value, pin)
  delay(1000);
  analogWrite(pwm1, 255);
  analogWrite(pwm2, 255);
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, HIGH);
  delay(1000);
  analogWrite(pwm1, 0);
  analogWrite(pwm2, 0);
  
}

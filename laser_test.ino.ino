const int CTRL = 8;
const int delayLaserOn = 5;
const int delayLaserOff = 3;
const int ldrPin = A5;

void setup() {
  pinMode(CTRL, OUTPUT);
  pinMode(ldrPin, INPUT);
  digitalWrite(CTRL, LOW);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(CTRL, HIGH);
  delay(delayLaserOn);
  int ldrStatus = analogRead(ldrPin);
  Serial.println(ldrStatus); 
  digitalWrite(CTRL, LOW);
  delay(delayLaserOff);
   
}

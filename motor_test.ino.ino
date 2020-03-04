#include <AccelStepper.h>
AccelStepper stepper (AccelStepper::FULL4WIRE, 8, 10, 9, 11);

// testing a stepper motor with a Pololu A4988 driver board or equivalent
// on an Uno the onboard led will flash with each step
// this version uses delay() to manage timing


byte directionPin = 51;
byte stepPin = 53;
int numberOfSteps = 500;
//byte ledPin = 13;
int pulseWidthMicros = 20;  // microseconds
int millisbetweenSteps = 100; // milliseconds - or try 1000 for slower steps


void setup() {

  Serial.begin(9600);
  Serial.println("Starting StepperTest");
  //digitalWrite(ledPin, LOW);
  
  delay(2000);

  pinMode(directionPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  //pinMode(ledPin, OUTPUT);
  
 
  digitalWrite(directionPin, HIGH);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
//    delayMicroseconds(pulseWidthMicros); // this line is probably unnecessary
    digitalWrite(stepPin, LOW);
    
    delay(10);
    
    //digitalWrite(ledPin, !digitalRead(ledPin));
  }
  
  //delay(3000);
  

  digitalWrite(directionPin, LOW);
  for(int n = 0; n < numberOfSteps; n++) {
    digitalWrite(stepPin, HIGH);
    // delayMicroseconds(pulseWidthMicros); // probably not needed
    digitalWrite(stepPin, LOW);
    
    delay(10);
    
    //digitalWrite(ledPin, !digitalRead(ledPin));
  }
}

void loop() {
}


//const int stepPin = 53;
//const int dirPin = 51;
//
//void setup() {
//  pinMode(stepPin, OUTPUT);
//  pinMode(dirPin, OUTPUT);
//}
//
//void loop() {
//  digitalWrite(dirPin, HIGH);
//  for (int i = 0; i < 200; i++)
//  {
//    digitalWrite(stepPin, HIGH);
//    delayMicroseconds(500);
//    digitalWrite(stepPin, LOW);
//    delayMicroseconds(500);
//  }
//  delay(1000);
//
//  digitalWrite(dirPin, LOW);
//  for(int i = 0; i < 400; i++)
//  {
//    digitalWrite(stepPin, HIGH);
//    delayMicroseconds(500);
//    digitalWrite(stepPin, LOW);
//    delayMicroseconds(500);
//  }
//  delay(1000);
//}

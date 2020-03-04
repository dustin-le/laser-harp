#include <Stepper.h>
#include <AccelStepper.h>

AccelStepper stepper (AccelStepper::FULL2WIRE, 51, 53);

// testing a stepper motor with a Pololu A4988 driver board or equivalent
// on an Uno the onboard led will flash with each step
// this version uses delay() to manage timing

int start = 45;
int directionPin = 51;
int stepPin = 53;
int numberOfSteps = 1000;
// byte ledPin = 13;
int pulseWidthMicros = 20;  // microseconds
int millisbetweenSteps = 100; // milliseconds - or try 1000 for slower steps

Stepper stepper1(numberOfSteps,51,53);

int stepCount = 0;         // number of steps the motor has taken

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one step:
  stepper1.setSpeed(30);
  stepper1.step(numberOfSteps);

  delay(500);
  stepper1.step(-numberOfSteps);
  Serial.print("steps:");
  Serial.println(stepCount);
  // stepCount++;
  delay(500);
}

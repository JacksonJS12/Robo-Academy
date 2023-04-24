#include <ZumoMotors.h>

ZumoMotors motors;
const int IR_PIN = 7; // IR sensor input pin
const int ATTACK_DISTANCE = 10; // distance to attack object (in cm)

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(IR_PIN, INPUT);
  motors.flipLeftMotor(true);
  motors.flipRightMotor(true);
}

void loop() {
  if (digitalRead(2) == LOW && digitalRead(3) == LOW) {
    // both sensors detect edge of the ring, stop and turn around
    motors.setSpeeds(0, 0);
    delay(1000);
    motors.setSpeeds(-200, 200);
    delay(500);
  } else {
    // no edge detected, look for object to attack
    int irReading = analogRead(IR_PIN);
    int distance = irReading / 2; // convert IR reading to distance (in cm)
    if (distance < ATTACK_DISTANCE) {
      // object detected, move towards it
      motors.setSpeeds(200, 200);
    } else {
      // no object detected, spin in place to look for object
      motors.setSpeeds(-200, 200);
    }
  }
}

#include "motors.h"//include motors header
motors robot(7,5,8,6);//creating object robot using pins 7,5,8,6
void setup() {
  robot.init();//initialize motors
  robot.standby(1);//set robot on standby
}

void loop() {
  robot.backward(250);//moving robot backwards with method at max speed

}

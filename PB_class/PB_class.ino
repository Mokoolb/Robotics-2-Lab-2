/*
the goal of this program is to be able to create 
a custom pushbutton and class and then use it
*/

#include "Pb.h"//implementing class

Pb button(5);//creating an object with the pin 5
int button_state;//a variable to store button state
void setup() {
  button.init();//initializing pin 5 to object button
}

void loop() {
  button_state = button.status();//reads the status of object button and stores it in a class
}

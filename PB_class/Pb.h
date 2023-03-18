#include "Arduino.h"//including the arduino class
#ifndef PB_H//checks if there are any previous definitions 
#define PB_H//if there is define it
class Pb{//creating the class
  private://everything in here only stays in the class
  int pin;//variable pin used in class
  int state;//variable state used in class
  long lastDebounceTime = 0;//variable for debouncer only used in class
  public://everything that can be accessed from outside the class
  Pb(int pin);//constructor
  int status();//method that returns a value for identifying status
  void init();//method to initialize the button
};





#endif//end the if

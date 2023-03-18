#include "Pb.h"//include the header file
Pb :: Pb(int pin){//contructor that receives pin number
  this->pin = pin;//setting the pin from object to the one in the class
}
int Pb :: status(){//value method for retrieving status
    int reading = digitalRead(pin);//setting the value read on pin 5
  if (reading != state) {//if reading doenst equal last button state 
    lastDebounceTime = millis();//then last debounce time will reset
  }

  if ((millis() - lastDebounceTime) > 50) {//this makes it so every 50 mis
    if (reading != state) {// if reading doesnt equal state
      state = digitalRead(pin);//state will be set to the final pin value
      return state;//returns the value 0 or 1
        
    }
  }
  
  }
}
void Pb :: init(){//initialize pin given
  pinMode(pin,INPUT);//initialize pin given as input
}

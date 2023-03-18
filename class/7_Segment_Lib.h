#ifndef Segment_H//checks if there are any previos definitions of this class
#define Segment_H//if there is it defines it instead
#include<Arduino.h>//includes the aruduino files
class digit{//calling the class
  private://all variables that are only in the class
int pins[7];//array for all pins
int LED0[7];//array for 0
int LED1[2];//array for 1
int LED2[5];//array for 2                
int LED3[5];//array for 3                
int LED4[4];//array for 4                
int LED5[5];//array for 5                
int LED6[6];//array for 6                
int LED7[3];//array for 7                
int LED8[7];//array for 8
int LED9[7];//array for 9
  public:
  digit();//receiving the values when calling an object;
    void zero();//calls function 0
  void one();//calls function 1
  void two();//calls function 2
  void three();//calls function 3
  void four();//calls function 4
    void five();//calls function 5
    void six();//calls function 6
    void seven();//calls function 7
    void eight();//calls function 8
  void nine();//calls function 9

    

};
#endif Segment_H//ends the define check if
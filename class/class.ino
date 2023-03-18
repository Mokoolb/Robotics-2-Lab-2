/*
the goal of this program is to use a 7 segemnt through
a custom made library
*/

#include "7_Segement_Lib.h"// including a custom made library


digit segment(7,8,2,3,4,6,5);//creating an object with the values of the pins of the 7 segment relative in this order, A,B,C,D,E,F,G
void setup(){
  for(int Pin=0;Pin<=8;Pin++){//looping until PIN is 8
  pinMode(Pin,OUTPUT);//setting current loop number as OUTPUT
}
  Serial.begin(9600);//begins serial incase serial reading becomes neccessary 
}
void loop(){
  segment.nine();//calls the object and a method within its class
  delay(500);  //delays for 0.5 seconds
}
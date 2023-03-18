//SERVO
#include <Servo.h>//add servo library
Servo myservo;  // create servo object to control a servo
int x = 0;// the position of the servo
int dir = 5; // direction of the movement of the servo

int latch = 41; //pin to latch 4
int cs = 42; //clockpin 5
int data = 40; //pin to pass the information 3
int dPins[4] = {25, 24, 23, 22};  //pins that control the digits, the go in that order, 4-3-2-1

//time
unsigned long current_millis = millis();//assigning a long variable to millis
unsigned long previous_millis; // assigning this variable for the use in a loop without using delay

void move(int a, int b, int c, int d){// a function to make it easier to move the robot
  digitalWrite(7,a);//writes value a to pin 7
  analogWrite(5,b);//writes value b to pin 5
  digitalWrite(8,c);//writes value c to pin 8
  analogWrite(6,d);//writes value d to pin 6
}

//Robot car
void forward(int x){//function for forward moving
  move(1,x,1,x); // turns on all motors at x speed
}
void right_onplace(int x){//function for right_onplace moving
  move(0,x,1,x); // turns on all motors at x speed, right forward and left backwards
}
void left_onplace(int x){//function for left_onplace moving
  move(1,x,0,x); // turns on all motors at x speed, left forward and right backwards
}
void backward(int x){//function for backward moving
  move(0,x,0,x); // turns on all motors at x speed backwards
}
const byte digits[10] = {  //It indicates which pins have to be on and off to display each number
  B00111111,  // 0
  B00000110,  // 1
  B01011011,  // 2
  B01001111,  // 3
  B01100110,  // 4
  B01101101,  // 5
  B01111101,  // 6
  B0000111,  // 7
  B01111111,  // 8
  B01101111,   // 9
};


void setup() {
  
   //robot
  for(int i=0; i<45; i ++){// a for loop hapenning 9 times
    pinMode(i,OUTPUT);// setting the pins 0-8
  }
  digitalWrite(3, HIGH);//this pin has to be on for the robot to work

  
   //Serial.begin(115200);  
  //servo
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  myservo.write(x);//set's the servo forward
}
void loop() {

myservo.write(x);//set's the servo forward
x = x + dir;// changing the position of servo by the direction value
if (x < 0){//if the position of the servo has reached its 0 limit then it switches directions
  dir = 5;//direction becomes positive
}
if (x > 180){//if the position of the servo has reached its 180 limit then it switches directions
  dir = -5;//direction becomes negative
}
forward(255);//move forward at 100 speed

  //4 7 segment 	//Count from 0 to 9 on each digit
//First digit
	digitalWrite(25, HIGH);//last digit is high which meeans its off
  digitalWrite(24, HIGH);//third digit is high which meeans its off
  digitalWrite(23, HIGH);//second digit is high which meeans its off
  digitalWrite(22, LOW);//first digit is high which meeans its on
  digitalWrite(latch, LOW);//Latch is low to shift values
 	shiftOut(data, cs, MSBFIRST, digits[4]);//shifts value of the byte for 4
 	digitalWrite(latch, HIGH);//Latch is high to stop the shift of values

  delay(5);//delay program by 5 millis

//Secon digit
	digitalWrite(25, HIGH);//last digit is high which meeans its off
  digitalWrite(24, HIGH);//third digit is high which meeans its off
  digitalWrite(23, HIGH);//second digit is high which meeans its on
  digitalWrite(22, LOW);//first digit is high which meeans its off
  digitalWrite(latch, LOW);//Latch is low to shift values
 	shiftOut(data, cs, MSBFIRST, digits[2]);//shifts value of the byte for 2
 	digitalWrite(latch, HIGH);//Latch is high to stop the shift of values
  delay(5);//delay program by 5 millis

//Third digit
	digitalWrite(25, HIGH);//last digit is high which meeans its off
  digitalWrite(24, HIGH);//third digit is high which meeans its on
  digitalWrite(23, HIGH);//second digit is high which meeans its off
  digitalWrite(22, LOW);//first digit is high which meeans its off
  digitalWrite(latch, LOW);//Latch is low to shift values
 	shiftOut(data, cs, MSBFIRST, digits[6]);//shifts value of the byte for 6
 	digitalWrite(latch, HIGH);//Latch is high to stop the shift of values
  delay(5);//delay program by 5 millis

//Four digit
	digitalWrite(25, HIGH);//last digit is high which meeans its on
  digitalWrite(24, HIGH);//third digit is high which meeans its off
  digitalWrite(23, HIGH);//second digit is high which meeans its off
  digitalWrite(22, LOW);//first digit is high which meeans its off
  digitalWrite(latch, LOW);//Latch is low to shift values
 	shiftOut(data, cs, MSBFIRST, digits[9]);//shifts value of the byte for 9
 	digitalWrite(latch, HIGH);//Latch is high to stop the shift of values
  delay(5);//delay program by 5 millis

}

#include "7_Segment_Lib.h"//including the h file that creates the class

  digit :: digit(int a, int b, int c, int d, int e, int f, int g){//the constructor within class digit
    int pins_[7] = {a,b,c,d,e,f,g};//transfers all values from object to array
     for (int i = 0; i < 7; i++) {//for loop that loops for every pin
        pins[i] = pins_[i];//transfers arrays to us in methods
    }
          int LED0_[7]= {b, a, f, d, c, e};//transfers values needed from object to array
        for (int i = 0; i < 7; i++) {//for loop that loops for every pin of 0
            LED0[i] = LED0_[i];//transfers arrays to us in methods
        }
        int LED1_[2]= {c, b};//transfers values needed from object to array
        for (int i = 0; i < 2; i++) {//for loop that loops for every pin of 1
            LED1[i] = LED1_[i];//transfers arrays to us in methods
        }
        int LED2_[5]= {b, a, g, e, d}; //transfers values needed from object to array               
        for (int i = 0; i < 5; i++) {//for loop that loops for every pin of 2
            LED2[i] = LED2_[i];//transfers arrays to us in methods
        }
        int LED3_[5]= {a, b, g, c, d};//transfers values needed from object to array                
        for (int i = 0; i < 5; i++) {//for loop that loops for every pin of 3
            LED3[i] = LED3_[i];//transfers arrays to us in methods
        }
        int LED4_[4]= {b, g, c, f};  //transfers values needed from object to array              
        for (int i = 0; i < 4; i++) {//for loop that loops for every pin of 4
            LED4[i] = LED4_[i];//transfers arrays to us in methods
        }
        int LED5_[5]= {a, g, f, c, d};  //transfers values needed from object to array              
        for (int i = 0; i < 5; i++) {//for loop that loops for every pin of 5
            LED5[i] = LED5_[i];//transfers arrays to us in methods
        }
        int LED6_[6]= {c, a, g, f, e, d}; //transfers values needed from object to array               
        for (int i = 0; i < 6; i++) {//for loop that loops for every pin of 6
            LED6[i] = LED6_[i];//transfers arrays to us in methods
        }
        int LED7_[3]= {c, a, b};      //transfers values needed from object to array          
        for (int i = 0; i < 3; i++) {//for loop that loops for every pin of 7
            LED7[i] = LED7_[i];//transfers arrays to us in methods
        }
        int LED8_[7]= {b, a, g, f, e, d, c};//transfers values needed from object to array
        for (int i = 0; i < 7; i++) {//for loop that loops for every pin of 8
            LED8[i] = LED8_[i];//transfers arrays to us in methods
        }
        int LED9_[6]= {b, a, g, f, d, c};//transfers values needed from object to array
        for (int i = 0; i < 7; i++) {//for loop that loops for every pin of 9
            LED9[i] = LED9_[i];//transfers arrays to us in methods
        }

  }
    void digit :: zero(){//method in class digit for 0
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 0
    digitalWrite(LED0[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
  void digit :: one(){//method in class digit for 1
    for(int i=0; i< 2;i++){//for loop that loops for every pin of 1
    digitalWrite(LED1[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
  void digit :: two(){//method in class digit for 2
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 2
    digitalWrite(LED2[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
  void digit :: three(){//method in class digit for 3
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 3
    digitalWrite(LED3[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
  void digit :: four(){//method in class digit for 4
    for(int i=0; i< 4;i++){//for loop that loops for every pin of 4
    digitalWrite(LED4[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
    void digit :: five(){//method in class digit for 5
    for(int i=0; i< 5;i++){//for loop that loops for every pin of 5
    digitalWrite(LED5[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
    void digit :: six(){//method in class digit for 6
    for(int i=0; i< 6;i++){//for loop that loops for every pin of 6
    digitalWrite(LED6[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
    void digit :: seven(){//method in class digit for 7
    for(int i=0; i< 3;i++){//for loop that loops for every pin of 7
    digitalWrite(LED7[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
    }
    }
    void digit :: eight(){//method in class digit for 8
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 8
    digitalWrite(LED8[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
  }
    }
  void digit :: nine(){//method in class digit for 9
    for(int i=0; i< 8;i++){//for loop that loops for every pin of 9
    digitalWrite(LED9[i],HIGH);//turns on a pin for every loop that continues to increase(according to the array)
  }
    }
    

};
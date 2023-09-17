 #ifndef Encoder_h
   #define Encoder_h

   #include "Arduino.h"

   class Encoder{
     private:
      int pinA;
      int pinB;
      int laststateA;
      int laststateB;
      int count;
      int elapsed;

    public:
      Encoder(int pin1,int pin2);


      float det(int pin1,int pin2);
   };









   #endif

   : #include "Encoder.h"
#include "Arduino.h"

Encoder::Encoder(int pin1,int pin2){
 pinMode(pin1,INPUT);
  pinA = pin1;
  pinMode(pin2,INPUT);
  pinB = pin2;

  laststateA = digitalRead(pinA);
  laststateB = digitalRead(pinB);
  count = 0; 
  elapsed = 0;
}


float Encoder::det(int pin1,int pin2){
  int start,current;
  float result;

  count = 0;
  start = millis();

  while(elapsed<100)
  {
    current = millis();
    elapsed = current-start;

    pinMode(pin1,INPUT);
    pinA = pin1;
    pinMode(pin2,INPUT);
    pinB = pin2;


      if (laststateA != digitalRead(pinA)){

        if (digitalRead(pinB) != digitalRead(pinA) && laststateB == digitalRead(pinB)) {count ++;}
        else if(digitalRead(pinB) == digitalRead(pinA) && laststateB != digitalRead(pinB)){count++;}
        else {count --;}


      } 
      laststateA = digitalRead(pinA);
      laststateB = digitalRead(pinB);


  }
  elapsed=0;

  result = (count/(48.034.0))600.0*(-2.0);
    return result;

}
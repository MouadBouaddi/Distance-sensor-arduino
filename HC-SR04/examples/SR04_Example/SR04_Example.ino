#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
int f = 36;
int c1 = f;
int c2 = f*2;
int c3 = f*3;
int c4 = f*4;
int c5 = f*5;
int c6 = f*6;
int c7 = f*7;
int c8 = f*8;

void setup() {
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(13, OUTPUT);
   Serial.begin(9600);
   
}

void loop() {
   a=sr04.Distance();
   Serial.print(a);
   Serial.println("cm");

   if (a <= c1) {
    analogWrite(4, 255);
    analogWrite(13, 255);
    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(10, 255);
   }
   else if (a > c1 && a <= c2) {
    analogWrite(3, 255);
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(13, 0);
   }
   else if (a > c2 && a <= c3) {
    analogWrite(10, 255);
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }
   else if (a > c3 && a <= c4) {
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(10, 0);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }
   else if (a > c4 && a <= c5) {
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 255);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }
   else if (a > c5 && a <= c6) {
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }
   else if (a > c6 && a <= c7) {
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 0);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }
   else if (a > c7 && a <= c8) {
    analogWrite(4, 255);
    analogWrite(5, 255);
    analogWrite(6, 0);
    analogWrite(7, 0);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(13, 0);
    analogWrite(3, 0);
   }   
   else if (a > c8) {
    analogWrite(4, 255);
    analogWrite(13, 0);
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(7, 0);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
   }
   
}

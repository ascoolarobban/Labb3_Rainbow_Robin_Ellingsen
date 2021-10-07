#include <Arduino.h>
#include "declare.h"
// Robin Ellingsen


//   Connections LED:
//  11     Red
//  10    Green
//  9    Blue


void setup() {
    Serial.begin(9600);
    pinMode(KEY1, INPUT);
    pinMode(KEY2, INPUT);
    pinMode(Red, OUTPUT);
    pinMode(Green, OUTPUT);
    pinMode(Blue, OUTPUT);

    analogWrite(Red,255);
    analogWrite(Green, 255);
    analogWrite(Blue, 255);
}



void loop() {
    Serial.println("Main");


    if(digitalRead(8) && digitalRead(12) == HIGH){
        morse();
        showStopper();
    }

    if(readKey1()){
        mode++;
        if(mode == 4){
            mode = 1;
        }
    }


    switch(mode){
        case 1:
 
            colorSwitch();
            break;

        case 2:
            rainbow();
            break;

        case 3:
            

            
            Serial.println("showStopper");
            showStopper();
            break;


    }




}

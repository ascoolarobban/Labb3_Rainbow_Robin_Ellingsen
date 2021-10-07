void lampsOn(){
    analogWrite(Red, 0);       // write analog signal
    analogWrite(Green, 0);
    analogWrite(Blue, 0);
}

void lampsOff(){
    analogWrite(Red, 255);       // write analog signal
    analogWrite(Green, 255);
    analogWrite(Blue, 255);
}
void morse(){

    while(1){
        Serial.println("morse");
        byte mapValue = map(POT, 0, 1023, 1, 200);
        POT = analogRead(0);
        lampsOn();
        delay(mapValue*10);
        Serial.println(mapValue);
        lampsOff();
        delay(mapValue*10);
        if(digitalRead(12) == HIGH){
            mode = 0;
            break;
        }



    }

}


//Fick hjälp med denna av Jokko & Elin.
bool state1,state2  = LOW;
bool k1, k2 = false;


bool readKey1(){
    bool state1 = digitalRead(KEY1);

    if (state1 == HIGH && k1 == false) {
        k1 = true;
        return true;
    }else if (state1 == LOW && k1 == true){
        k1 = false;
        return false;
    }
    return false;
}


bool readKey2(){
    bool state2 = digitalRead(KEY2);

    if (state2 == HIGH && k2 == false) {
        k2 = true;
        return true;
    }else if (state2 == LOW && k2 == true){
        k2 = false;
        return false;
    }
    return false;
}

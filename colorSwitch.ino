
void colorSwitch(){




    Serial.println("ColorSwitch");
    if (digitalRead(12) == HIGH){
        counter++;
        if (counter == 4){
            counter = 1;
        }
    }

    switch (counter){
        case 1: //RED
        digitalWrite(Red,0);
        digitalWrite(Green, 255);
        digitalWrite(Blue, 255);// write analog signal
        break;

        case 2: //GREEN
        digitalWrite(Red,255);
        digitalWrite(Green, 0);
        digitalWrite(Blue, 255);// write analog signal
        break;

        case 3: //BLUE
        digitalWrite(Red,255);
        digitalWrite(Green, 255);
        digitalWrite(Blue, 0);// write analog signal
        break;
    }
    delay(100);



}

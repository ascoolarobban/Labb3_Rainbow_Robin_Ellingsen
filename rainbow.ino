void rainbow(){

    Serial.println("Rainbow");
    potValue = analogRead(POT);
    potValue = map(potValue, 0, 1023, 5, 500);

        analogWrite(Red, Rvalue);
        analogWrite(Green, Gvalue);
        analogWrite(Blue, Bvalue);

        Rvalue = Rvalue + Rdirection;
        Gvalue = Gvalue + Gdirection;
        Bvalue = Bvalue + Bdirection;

        if (Rvalue >= 255 || Rvalue <= 0) {
            Rdirection = Rdirection * -1;
        }

        if (Gvalue >= 255 || Gvalue <= 0) {
            Gdirection = Gdirection * -1;
        }

        if (Bvalue >= 255 || Bvalue <= 0) {
            Bdirection = Bdirection * -1;
        }

        delay(potValue);
        Serial.println(potValue);


}

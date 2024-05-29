int LEDpin = 4;
int dotDelay = 200;
void setup(){
  pinMode(LEDpin, OUTPUT); 
}
void loop(){   
    //S, 3 ТОЧКИ digitalWrite(LEDpin, HIGH);
    delay(dotDelay);
    digitalWrite(LEDpin, LOW);    
    delay(dotDelay);
    digitalWrite(LEDpin, HIGH);
    delay(dotDelay);    
    digitalWrite(LEDpin, LOW);
    delay(dotDelay);      
    digitalWrite(LEDpin, HIGH);    \
    delay(dotDelay);
    digitalWrite(LEDpin, LOW);      
    delay(3*dotDelay);

    //O, ТРИ ТИРЕ   digitalWrite(LEDpin, HIGH);
    delay(3*dotDelay);    
    digitalWrite(LEDpin, LOW);
    delay(dotDelay);  
    digitalWrite(LEDpin, HIGH);    
    delay(3*dotDelay);
    digitalWrite(LEDpin, LOW);
    delay(dotDelay);  
    digitalWrite(LEDpin, HIGH);    
    delay(3*dotDelay);
    digitalWrite(LEDpin, LOW);    
    delay(3*dotDelay);

    //S, 3 ТОЧКИ   digitalWrite(LEDpin, HIGH);
    delay(dotDelay);    
    digitalWrite(LEDpin, LOW);
    delay(dotDelay);      
    digitalWrite(LEDpin, HIGH);    
    delay(dotDelay);
    digitalWrite(LEDpin, LOW);    
    delay(dotDelay);
      
    digitalWrite(LEDpin, HIGH);    
    delay(dotDelay);
    digitalWrite(LEDpin, LOW);    
    
    //ОКОНЧАНИЕ СЛОВА  
    delay(7*dotDelay);
    }
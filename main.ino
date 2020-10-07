//CREATIVE EXPERTZ
#include <Servo.h>   //servo library
Servo servo;     

int servoPin = 7;

void setup() {       
    servo.attach(servoPin);  
    servo.write(0);        
    delay(5000);
    servo.detach();
} 

void loop() { 
  
 servo.attach(servoPin);
  delay(1);
 servo.write(90);  
 delay(10000);  
 servo.write(0);    
 delay(500000);
 servo.detach();      
}


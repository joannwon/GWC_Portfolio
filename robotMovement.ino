#include <Servo.h>

Servo servoRight;
Servo servoLeft;

int counter = 0;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  servoLeft.attach(13);
  servoRight.attach(10);
  
  




 
}


void loop() {
if (counter < 50
) {
  digitalWrite(11, HIGH);   
  delay(450);
  digitalWrite(11, LOW);

  servoLeft.write(0);
  servoRight.write(180);
  delay(500);
  servoLeft.write(180);
  servoRight.write(0);
  counter += 1;
  delay(200);
  servoLeft.write(3);
  servoRight.write(0);
  delay(500);
  }

  
  
  if (counter >= 50) {
    servoLeft.write(0);
    servoRight.write(180);
    counter += 1;
    digitalWrite(11, HIGH);   
    delay(450);
    digitalWrite(11, LOW);
  
    delay(500);
    servoLeft.write(180);
    servoRight.write(0);
    counter += 1;
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(12, LOW);
    
    delay(200);
    servoLeft.write(3);
    servoRight.write(0);
    counter = counter + 1;
    delay(500);
  }

}

      



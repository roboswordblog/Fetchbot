#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup(){
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
  //servo3.write(0);
  //servo2.write(0);
  servo3.write(-90);
  servo2.write(-90);
  servo1.write(-90);
}
void lunge(){
  servo3.write(90);
  servo2.write(90);

  }
void loop(){
  delay(2000);
}

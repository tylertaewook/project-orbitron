#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


void setup() {

  Serial.begin(9600);
  
  servo1.attach(2);
  servo2.attach(3);
  servo1.attach(4);
  servo2.attach(5);

  #define dir_1 10
  #define dir_2 11
  
  #define dir_3 12
  #define dir_4 13
    
  #define pwm_1 6
  #define pwm_2 7
  #define pwm_3 8
  #define pwm_4 9

  //declare pins as INPUT/OUTPUT
  pinMode(pwm_1,OUTPUT);
  pinMode(dir_1,OUTPUT);
  pinMode(pwm_2,OUTPUT);
  pinMode(dir_2,OUTPUT);
  pinMode(pwm_3,OUTPUT);
  pinMode(dir_3,OUTPUT);
  pinMode(pwm_4,OUTPUT);
  pinMode(dir_4,OUTPUT);

  //Serial.begin(9600); //I am using Serial Monitor instead of LCD display
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) 
  {
    int value = Serial.read();
     
  switch (value){
    case 'w':
      digitalWrite(dir_1, 1);
      digitalWrite(dir_2, 1);
      digitalWrite(dir_3, 1);
      digitalWrite(dir_4, 1);
      for(int i = 0; i < 255; i++) 
        {
        analogWrite(pwm_1, i);
        analogWrite(pwm_2, i);
        analogWrite(pwm_3, i);
        analogWrite(pwm_4, i);
        }
      break;
    case 'W':
      digitalWrite(dir_1, 0);
      digitalWrite(dir_2, 0);
      digitalWrite(dir_3, 0);
      digitalWrite(dir_4, 0);
      analogWrite(pwm_1, 0);
      analogWrite(pwm_2, 0);
      analogWrite(pwm_3, 0);
      analogWrite(pwm_4, 0);
      break;
  }
     
  }
  else {
    }
}


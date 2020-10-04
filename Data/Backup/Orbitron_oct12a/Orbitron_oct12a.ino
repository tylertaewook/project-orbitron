#include <Servo.h>

//Servo Setup
Servo servo1, servo2, servo3, servo4;

#define PWM1_MIN  700
#define PWM1_MID 1500
#define PWM1_MAX 2300

#define PWM2_MIN  700
#define PWM2_MID 1500
#define PWM2_MAX 2300

#define PWM3_MIN  700
#define PWM3_MID 1500
#define PWM3_MAX 2300

#define PWM4_MIN  700
#define PWM4_MID 1500
#define PWM4_MAX 2300

#define PWM_STEP  10 //For modifying servo speed

// global stores value of PWM in microseconds
int pwm1 = 1500;
int pwm2 = 1500;
int pwm3 = 1500;
int pwm4 = 1500;

void setup() {

  Serial.begin(9600);

  servo1.attach(2, PWM1_MIN, PWM1_MAX);
  servo1.writeMicroseconds(pwm1);

  servo2.attach(3, PWM2_MIN, PWM2_MAX);
  servo1.writeMicroseconds(pwm2);

  servo3.attach(4, PWM3_MIN, PWM3_MAX);
  servo1.writeMicroseconds(pwm3);

  servo4.attach(5, PWM4_MIN, PWM4_MAX); // attaches the servo on pin 9 to the servo object
  servo1.writeMicroseconds(pwm4);

  //Pins
#define dir_1 10
#define dir_2 11
#define dir_3 12
#define dir_4 13

#define pwm_1 6
#define pwm_2 7
#define pwm_3 8
#define pwm_4 9

  //declare pins as INPUT/OUTPUT
  pinMode(pwm_1, OUTPUT);
  pinMode(dir_1, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  pinMode(dir_2, OUTPUT);
  pinMode(pwm_3, OUTPUT);
  pinMode(dir_3, OUTPUT);
  pinMode(pwm_4, OUTPUT);
  pinMode(dir_4, OUTPUT);


}

void loop() {


  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    int value = Serial.read();

    switch (value) {

      //Up
      case 'W':
        digitalWrite(dir_1, 1);
        digitalWrite(dir_2, 1);
        digitalWrite(dir_3, 1);
        digitalWrite(dir_4, 1);

        analogWrite(pwm_1, 255);
        analogWrite(pwm_2, 255);
        analogWrite(pwm_3, 255);
        analogWrite(pwm_4, 255);

        //test
        servo1.writeMicroseconds(pwm1);
        servo2.writeMicroseconds(pwm2);
        servo3.writeMicroseconds(pwm3);
        servo4.writeMicroseconds(pwm4);



        break;
      case 'w':
        digitalWrite(dir_1, 0);
        digitalWrite(dir_2, 0);
        digitalWrite(dir_3, 0);
        digitalWrite(dir_4, 0);
        analogWrite(pwm_1, 0);
        analogWrite(pwm_2, 0);
        analogWrite(pwm_3, 0);
        analogWrite(pwm_4, 0);
        break;
      //Down
      case 'S':
        digitalWrite(dir_1, 0);
        digitalWrite(dir_2, 0);
        digitalWrite(dir_3, 0);
        digitalWrite(dir_4, 0);

        analogWrite(pwm_1, 255);
        analogWrite(pwm_2, 255);
        analogWrite(pwm_3, 255);
        analogWrite(pwm_4, 255);
        break;
      case 's':
        digitalWrite(dir_1, 0);
        digitalWrite(dir_2, 0);
        digitalWrite(dir_3, 0);
        digitalWrite(dir_4, 0);
        analogWrite(pwm_1, 0);
        analogWrite(pwm_2, 0);
        analogWrite(pwm_3, 0);
        analogWrite(pwm_4, 0);
        break;

      //Left : PWM Decrease
      case 'A':

        if (pwm1 > PWM1_MIN) pwm1 -= PWM_STEP;
        servo1.writeMicroseconds(pwm1);
        if (pwm2 > PWM2_MIN) pwm2 -= PWM_STEP;
        servo2.writeMicroseconds(pwm2);
        if (pwm3 > PWM3_MIN) pwm3 -= PWM_STEP;
        servo3.writeMicroseconds(pwm3);
        if (pwm4 > PWM4_MIN) pwm4 -= PWM_STEP;
        servo4.writeMicroseconds(pwm4);
        break;

      case 'a':
        //pass
        break;
      //Right : PWM incrase
      case 'D':

        if (pwm1 > PWM1_MIN) pwm1 += PWM_STEP;
        servo1.writeMicroseconds(pwm1);
        if (pwm2 > PWM2_MIN) pwm2 += PWM_STEP;
        servo2.writeMicroseconds(pwm2);
        if (pwm3 > PWM3_MIN) pwm3 += PWM_STEP;
        servo3.writeMicroseconds(pwm3);
        if (pwm4 > PWM4_MIN) pwm4 += PWM_STEP;
        servo4.writeMicroseconds(pwm4);
        break;

      case 'd':
        //pass
        break;
    }

  }
  else {
    //Exception Case
  }



}



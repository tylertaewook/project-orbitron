




long previousMillis = 0;
long interval = 50;


void setup() {

Serial.begin(9600);
 

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
  pinMode(pwm_1,OUTPUT);
  pinMode(dir_1,OUTPUT);
  pinMode(pwm_2,OUTPUT);
  pinMode(dir_2,OUTPUT);
  pinMode(pwm_3,OUTPUT);
  pinMode(dir_3,OUTPUT);
  pinMode(pwm_4,OUTPUT);
  pinMode(dir_4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available() > 0) 
  {
    int value = Serial.read();


     unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
 
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
 
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);


     //----------------------------------------------------------------
  switch (value){
    
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
        }
     
  }
  else {
    //Exception Case
    }


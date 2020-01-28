/*
  Configurable Motor Matrix 

  Turns motors on in sequence for specific seconds, then off for specific seconds, repeatedly.

  modified 27 Jan 2020
  by Ravi Sinha ( github username: ravi312)
  written 13 Dec 2019
  by Ravi Sinha ( github username: ravi312)

  MIT Licence
  

*/
int S_pattern[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, A1, A2, A3, A4, A5};
int X_pattern[] = { 6, 7, A2 ,A3, A4, A1, 8 , 5, A5, 12, 3, 4, A0, 11, 10, 3};

void setup() {
  
  for (byte i = 0; i < 15; i++) {
    pinMode(S_pattern[i], OUTPUT);
  }
  
}

void loop() {
  //motor( motor IDcode, ON duration, delay) time in millisec
   //For S pattern code
   for (byte i = 0; i < 15; i++) {
    motor(S_pattern[i],100,200);
  }
              
}

void motor(int motorID,int onDuration, int offDuration){
  digitalWrite(motorID, HIGH);   
  delay(onDuration);               
  digitalWrite(motorID, LOW);    
  delay(offDuration);
  
}
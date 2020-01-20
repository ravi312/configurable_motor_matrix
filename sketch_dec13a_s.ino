int grey=6; //
int purple=7;
int blue=8;
int green=9;

void setup() {
  pinMode(grey, OUTPUT);
  pinMode(purple, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {

   
   
    motor(green,400,500);
 motor(blue,600,500);
     motor(purple,800,500);
   
    motor(grey,1000,500);
                      
}

void motor(int m,int o, int f){
  digitalWrite(m, HIGH);   
  delay(o);               
  digitalWrite(m, LOW);    
  delay(f);
  
}

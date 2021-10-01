#include <Servo.h>


int base_pos = 0;
int  claw_pos = 0;
Servo base,claw;
int uer_pos = 0; 

void setup() {
  base.attach(9);
  Serial.begin(9600);
  Serial.println("please input your value\t for example : b45 ");

}

void loop() { 
  if (0 !=Serial.available()){
    char servo_name = Serial.read();
    Serial.print("servo name :");
    Serial.print(servo_name);
    Serial.print(",");
    switch (servo_name){
      case 'c':
        int servo_pos = Serial.parseInt();
        base.write(servo_pos);
        Serial.print("servo pos :");
        Serial.println(servo_pos);
        delay(10);
        break;
     }   
  }
}

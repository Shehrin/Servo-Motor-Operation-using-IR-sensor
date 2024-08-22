#include <Servo.h>
Servo pwm;
int irvalue;
int irpin= 11;
int i, j;
void setup()
{
pinMode(irpin,INPUT);
Serial.begin(9600);
pwm.attach(7);
}
void loop()

{
  irvalue= digitalRead(irpin);
  if(irvalue==0)
  {
    for(i=0; i<=180; i++)
    { 
      pwm.write(i); 
      delay(50);
    }
    
  }
  else
  {
    pwm.write(0);
  }
  
}
//define
#include <SoftwareSerial.h>
SoftwareSerial BT(2,3);
char switchLed;

//setup
void setup()
{
Serial.begin(9600);//pin 0,1  
BT.begin(9600);//pin 0,1
pinMode(13, OUTPUT); 
}

//loop
void loop()
{
 if(Serial.available()>0){
    BT.print(Serial.read());

        
  }
  
 if(BT.available() >0){
  switchLed = BT.read();
  if(switchLed == 'O')
        digitalWrite(13,HIGH);
  if(switchLed == 'X')
        digitalWrite(13,LOW);
  }
  Serial.print(switchLed);
 
}


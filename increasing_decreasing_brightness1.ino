// C++ code
//
int pin=9;
int brightness=0;
int fadeAmount=5;
void setup()
{
  pinMode(pin,OUTPUT);
}

void loop()
{
 analogWrite(pin,brightness);
  brightness=brightness+fadeAmount;
  if(brightness<=0 || brightness>=255){
    fadeAmount=-fadeAmount;
  }
  delay(30);
}
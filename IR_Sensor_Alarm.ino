int IRsensor = 7;
int Buzzer = 5;
int Led = 2;
void setup() 
{
 Serial.begin(9600);
 pinMode (IRsensor,INPUT);
 pinMode (Buzzer,OUTPUT);
 pinMode (Led,OUTPUT);
}

void loop() 
{
int sensorval= digitalRead(IRsensor);
Serial.println(sensorval);
if (sensorval==0)
{digitalWrite(Led,HIGH);
tone(Buzzer,1000,1000);
delay(500);
tone(Buzzer,1500,1000);
delay(500);
tone(Buzzer,1000,1000);
delay(500);
tone(Buzzer,1500,1000);
delay(500);
delay(1000);
}
else
{
digitalWrite(Led,LOW);
}
}

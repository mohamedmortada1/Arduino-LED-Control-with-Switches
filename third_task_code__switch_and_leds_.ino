int switch1=2;
int switch2=7;
int led1=3;
int led2=5;
int led3=6;
int led4=9;
int led5=10;
int led6=11;
int x=2;
int y=2;
int reading1=0;
int reading2=0;
void setup(){
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
}

void loop(){  
  reading1 = digitalRead(switch1);
  reading2 = digitalRead(switch2);
   if(reading1 == HIGH){x=1;}
   else{x=0;}
  if(reading2 == HIGH){y=1;}
   else{y=0;}
  
  switch(x){
    case 1 : digitalWrite(led1,HIGH);
            digitalWrite(led2,HIGH);
            break;
    case 0 : digitalWrite(led1,LOW);
             digitalWrite(led2,LOW);
             break;
  }
  
   switch(y){
    case 1 : digitalWrite(led4,HIGH);
            digitalWrite(led6,HIGH);
            break;
    case 0 : digitalWrite(led4,LOW);
             digitalWrite(led6,LOW);
             break;
  }}
  

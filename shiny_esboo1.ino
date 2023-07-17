// C++ code
int reading;
int c=0;
void setup()
{pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(11,INPUT);
}

void loop()
{reading=digitalRead(11);
 if(reading==HIGH){
  c++;
   if(c==1){
 digitalWrite(8,1);
   }else if (c==2){
     digitalWrite(9,1);}
   else if(c==3){
     digitalWrite(10,1);}
   else if(c==4){
       c=0;
       digitalWrite(8,0);
       digitalWrite(9,0);
       digitalWrite(10,0);
   }delay(350);}}
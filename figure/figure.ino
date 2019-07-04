void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  Serial.begin(9600);
}

int input;
int a,b,c,d;
void zhuanhua();
void prin();

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    input=Serial.read();
    input=input-48;

    zhuanhua();    
    prin();
      
    delay(1000);
      
    }
}


void zhuanhua()
{
  if(0<=input)
    {
      if(input>=8)
      {
        a=HIGH;
        input=input-8;
        }
      else
      {
        a=LOW;
        }
      if(input>=4)
      {
        b=HIGH;
        input=input-4;
        }
      else
      {
        b=LOW;
        }
      if(input>=2)
      {
        c=HIGH;
        input=input-2;
        }
      else
      {
        c=LOW;
        }
      if(input>=1)
      {
        d=HIGH;
        input=input-1;
        }
      else
      {
        d=LOW;
        }
      }

  }
 
 void prin()
 {
  digitalWrite(2,d);
  digitalWrite(3,c);
  digitalWrite(4,b);
  digitalWrite(5,a);
  }

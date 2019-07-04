void setup()
{
  pinMode(5 , OUTPUT);
  pinMode(6 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(10, OUTPUT);
  
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  int ascii=0;
  while(Serial.available()>0)
  {
    ascii=Serial.read();
    switch(ascii)
    {
      case 'f':
        go();
        break;
      case 'b':
        back();
        break;
      case 'l':
        left();
        break;
      case 'r':
        right();
        break;
      case 's':
        sp();
        break;
    }
    }
}

void go()
{
  digitalWrite(5 , HIGH);
  digitalWrite(6 , LOW );
  digitalWrite(9 , HIGH);
  digitalWrite(10, LOW );
  }

void back()
{
  digitalWrite(5 , LOW );
  digitalWrite(6 , HIGH);
  digitalWrite(9 , LOW );
  digitalWrite(10, HIGH);
  }
  
void left()
{
  digitalWrite(5 , HIGH);
  digitalWrite(6 , LOW );
  digitalWrite(9 , LOW );
  digitalWrite(10, HIGH);
  }

void right()
{
  digitalWrite(5 , LOW );
  digitalWrite(6 , HIGH);
  digitalWrite(9 , HIGH);
  digitalWrite(10, LOW );
  }

void sp()
{
  digitalWrite(5 , LOW );
  digitalWrite(6 , LOW );
  digitalWrite(9 , LOW );
  digitalWrite(10, LOW );
  }

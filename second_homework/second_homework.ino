int income;
int i=0;
int letter[10][4]={{0,0,0,0}, {0,0,0,1}, {0, 0, 1, 0},
                   {0,0,1,1}, {0,1,0,0},{0,1,0,1}, 
                   {0,1,1,0}, {0,1,1,1},{1,0,0,0},{1,0,0,1}};
int *p;


void setup()
{
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  if(Serial.available()>0)
  {
  income = Serial.read();
  income = income - 48;
  p =& letter[income][0];
  for(i=0;i<4;i++)
  {
    digitalWrite
      (5-i,*p++);
  }
  }
}

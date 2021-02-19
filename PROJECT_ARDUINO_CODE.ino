bool anxious = false;
bool sad = false;
bool happy = false;
bool angry = false;
String readString;

int red =  2;
int green = 3;
int blue = 4;
int red2 = 5;
int green2 = 6;
int blue2 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(blue2,OUTPUT);
}

void loop () {
  if(Serial.available() > 0) 
  {
    char c = Serial.read();
    readString +- c;
    
    if (c) 
    {
      if (c=='V') 
      {
        anxious = true;
      }
      if (c=='B')
      {
        sad = true;
      }
      if (c=='G')
      {
        happy = true;
      }

      c = NULL;
    }
}
if (anxious)
{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red2, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(blue2, HIGH);
}

if (sad)
{
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(blue2, HIGH);
}

if (happy)
{
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(blue2, LOW);
}
delay(1000);
}

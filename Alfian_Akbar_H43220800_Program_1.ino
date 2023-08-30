const int Led = 13;
const int Button = 2; 
int ButtonClick = LOW;
bool NyalaLED = false; 

void setup() 
{
  pinMode(Led, OUTPUT);
  pinMode(Button, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(Button) == LOW)
  {
    delay(50);
    if (digitalRead(Button) == LOW)
    {
      NyalaLED = !NyalaLED;
      digitalWrite(Led, NyalaLED ? HIGH : LOW);
      while (digitalRead(Button) == LOW);
    }
  }
}

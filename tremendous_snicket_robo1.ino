// C++ code
//
int led = 6;
int button1 = 8;
int button2 = 9;
int Reading =0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  digitalWrite(led, 1);
    delay(3000); 
  digitalWrite(led, 0);
    delay(3000);
  
}

void loop()
{
  Reading = digitalRead(button1);
  if (Reading == HIGH){
    digitalWrite(led,LOW);
    delay(3000);
}
  {
   
    Reading = digitalRead(button2);
    if (Reading == HIGH){
    digitalWrite(led, HIGH);
      delay(3000);
    }

  }
}
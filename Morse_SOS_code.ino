//Morse SOS code project

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(8, HIGH);
    delay(150);
    digitalWrite(8, LOW);
    delay(100);
  }

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(8, HIGH);
    delay(400);
    digitalWrite(8, LOW);
    delay(100);
  }

  for(int i = 0; i < 3; i++)
  {
    digitalWrite(8, HIGH);
    delay(150);
    digitalWrite(8, LOW);
    delay(100);
  }

  delay(5000);

}

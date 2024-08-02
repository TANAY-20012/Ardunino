// C++ code
//
int PIR = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  PIR = digitalRead(5);
  if (PIR == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
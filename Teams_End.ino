int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);

}

void loop()
{
  // read the input pin
  buttonState = digitalRead(2);
  if(buttonState == 1){
    Serial.println('d');
  }
 
  delay(10); // Delay a little bit to improve simulation performance
}
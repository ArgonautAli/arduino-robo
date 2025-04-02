int pin = 13;
int dit = 100;
int dot = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

    digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

    digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);


  digitalWrite(pin,HIGH);
  delay(dot);
  digitalWrite(pin,LOW);
  delay(dot);
  digitalWrite(pin,HIGH);
  delay(dot);
  digitalWrite(pin,LOW);
  delay(dot);
  digitalWrite(pin,HIGH);
  delay(dot);
  digitalWrite(pin,LOW);
  delay(dot);

  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

    digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);

    digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dot);


}

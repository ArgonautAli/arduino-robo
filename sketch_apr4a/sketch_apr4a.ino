int pin_zero = 5;
int pin_one = 7;
int pin_two = 8;
int pin_three = 10;

int myPins[] = {5,7,8,10};
int bip = 100;

void setup() {
  pinMode(pin_zero, OUTPUT);
  pinMode(pin_one, OUTPUT);
  pinMode(pin_two, OUTPUT);
  pinMode(pin_three, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // for(int i = 0; i < 4; i++)
  // {
  // digitalWrite(myPins[i], HIGH);
  // delay(bip*i);
  // digitalWrite(myPins[i], LOW);
  // delay(bip*i);
  // }

  digitalWrite(pin_zero, HIGH);
  delay(bip);
  digitalWrite(pin_zero, LOW);
  // delay(bip);

  digitalWrite(pin_one, HIGH);
  delay(bip*2);
  digitalWrite(pin_one, LOW);
  // delay(bip);

  digitalWrite(pin_two, HIGH);
  delay(bip*4);
  digitalWrite(pin_two, LOW);
  // delay(bip);

  digitalWrite(pin_three, HIGH);
  delay(bip*8);
  digitalWrite(pin_three, LOW);
  // delay(bip);

  // digitalWrite(pin_three, HIGH);
  // digitalWrite(pin_two, HIGH);

  // put your main code here, to run repeatedly:

}

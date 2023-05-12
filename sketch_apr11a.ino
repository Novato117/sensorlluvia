 int led=22;
void setup() {
  Serial.begin(9600);
pinMode(led,OUTPUT);

}

void loop() {
  int value=0;
  digitalWrite(led,HIGH);
  value=digitalRead(led);
   if (value == HIGH) {
      Serial.println("Detectada lluvia");
  }
  delay(2000);
  digitalWrite(led,LOW);
  delay(2000);
}


int LED = 4;
int BlueLED = 3;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(BlueLED, HIGH);
  delay(1000);
  digitalWrite(BlueLED, LOW);
  delay(1000);
}

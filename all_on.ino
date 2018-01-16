void setup() {
  // put your setup code here, to run once:
  for (int i = 1; i <= 45; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  for (int i = 1; i <= 45; i++) {
    delay(100);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i <= 45; i++) {
    delay(100);
    digitalWrite(i, HIGH);
  } 
  delay(5000);
  for (int i = 45; i >= 1; i--) {
    delay(100);
    digitalWrite(i, LOW);
  } 
  
  /*
  for (int i = 1; i <= 45; i++) {
    if (random(0,9) > 4){
      digitalWrite(i, HIGH);
    } else {
      digitalWrite(i, LOW);
    }
  }
  */
  delay(100);
}

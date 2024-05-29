#define BUZZER_PIN 3
#define LDR_PIN A0

int dotDelay = 400;
int delayNew = 500;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

}

void loop() {
  int val, frequency;

  //val = analogRead(LDR_PIN);

  //frequency = map(val, 0, 1023, 3500, 4500);
  frequency = constrain(val, 5000, 2500);

  tone(BUZZER_PIN, frequency, 1);
  delay(dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(3*dotDelay);

  tone(BUZZER_PIN, frequency, 1);
  delay(3*dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(3*dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(3*dotDelay);

  tone(BUZZER_PIN, frequency, 1);
  delay(dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(dotDelay);
  tone(BUZZER_PIN, frequency, 1);
  delay(6*dotDelay);

  
  tone(BUZZER_PIN, frequency, 1);
  delay(100);
  tone(BUZZER_PIN, frequency, 1);
  delay(100);

  delay(6*dotDelay);



}

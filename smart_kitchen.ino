int pirPin = 2;
int flamePin = 3;
int smokePin = 4;
int buzzer = 8;
int ledPin = 13;


unsigned long motionStartTime = 0;
const unsigned long motionDuration = 6000; 
bool motionActive = false;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(flamePin, INPUT);
  pinMode(smokePin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  digitalWrite(buzzer, HIGH); 
}

void loop() {

  int motion = digitalRead(pirPin);
  int flame = digitalRead(flamePin);
  int smoke = digitalRead(smokePin);

  Serial.print("PIR: ");
  Serial.print(motion);
  Serial.print(" | Flame: ");
  Serial.print(flame);
  Serial.print(" | Smoke: ");
  Serial.println(smoke);

  if (flame == LOW) {
    digitalWrite(buzzer, LOW);
  }


  else if (smoke == LOW) {
    digitalWrite(buzzer, LOW);  
  }

  else {
    if (motion == HIGH) {
      motionStartTime = millis();
      motionActive = true;
    }

  
    if (motionActive && (millis() - motionStartTime <= motionDuration)) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzer, HIGH); 
    }
    else {
      motionActive = false;
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzer, HIGH); 
    }
  }

  delay(200);
}

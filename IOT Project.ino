int motionSensor = D1;
int buzzer = D6;
int led = D7;

//int LED = D4;  // LED 2

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  //pinMode(LED, OUTPUT);  //LED ON

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);

  pinMode(motionSensor, INPUT);

  delay(1500);

  Serial.println("Motion sensor test.");
}

unsigned long currentTime;

const unsigned long motionCheckInterval = 150UL;
unsigned long previousMotionCheckTime = 0;

void loop() {
  // put your main code here, to run repeatedly:

  currentTime = millis();

  if (currentTime - previousMotionCheckTime >= motionCheckInterval) {

    int isMotionDetected = digitalRead(motionSensor);

    if (isMotionDetected == 0) {

      Serial.println("Motion ended!");
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(buzzer,LOW);
      digitalWrite(led, HIGH);
    } else {

      Serial.println("Motion detected!");
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(buzzer,HIGH);
      digitalWrite(led, HIGH);
    }

    previousMotionCheckTime = currentTime;
  }
}
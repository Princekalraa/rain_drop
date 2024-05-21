const int rainSensorPin = A0;
const int ledPin = 13;

void setup() {
  pinMode(rainSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int rainValue = analogRead(rainSensorPin);
  Serial.print("Rain Value: ");
  Serial.println(rainValue);

  if (rainValue < 500) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Rain detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}

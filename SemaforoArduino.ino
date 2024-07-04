const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    digitalWrite(redPin, HIGH);
    delay(2000);
    digitalWrite(redPin, LOW);

    digitalWrite(yellowPin, HIGH);
    delay(1000);
    digitalWrite(yellowPin, LOW);

    digitalWrite(greenPin, HIGH);
    delay(2000);
    digitalWrite(greenPin, LOW);
}
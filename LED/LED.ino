#define LED_PIN 2
#define buzzer 3
#define PIR_PIN 4 
void setup() {
pinMode(LED_PIN, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(PIR_PIN, INPUT);
Serial.begin(9600);
} 
void loop() {
int pirState = digitalRead(PIR_PIN); 
if (pirState == HIGH) {
digitalWrite(LED_PIN, HIGH);
digitalWrite(buzzer, HIGH);
Serial.println("Motion detected! LED and Buzzer ON");
} else {
digitalWrite(LED_PIN, LOW);
digitalWrite(buzzer, LOW);
Serial.println("No motion. LED and Buzzer OFF");
}
delay(500);
} 
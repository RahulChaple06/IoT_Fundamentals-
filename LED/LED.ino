#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT); 
  Serial.begin(9600);
void loop() {
  digitalWrite(LED_PIN, HIGH); 
  Serial.println("LED is ON");
}

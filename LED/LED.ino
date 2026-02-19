// LED blinking in 1 sec

#define LED_PIN 5

void setup() {
  
  pinMode(LED_PIN, OUTPUT); 
  Serial.begin(9600);

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  Serial.println("LED is ON");
  delay(1000);
  digitalWrite(LED_PIN, LOW); 
  Serial.println("LED is OFF");
}

// LED blinking in 1 sec

#define LED_PIN 2
#define buzzer 3

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(buzzer, OUTPUT); 
 
  Serial.begin(9600);

void loop() {
  digitalWrite(LED_PIN, HIGH); 
  digitalWrite(buzzer, HIGH); 
  Serial.println("LED and Buzzer is ON");
  delay(1000);
  digitalWrite(LED_PIN, LOW); 
  digitalWrite(buzzer, LOW); 
  Serial.println("LED and Buzzer is OFF");
}

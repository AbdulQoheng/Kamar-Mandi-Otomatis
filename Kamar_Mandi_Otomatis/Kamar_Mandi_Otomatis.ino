#define echoPin 11 //Echo Pin ultra sonik
#define trigPin 12 //Trigger Pin ultra sonik
#define PIR 10 // Sensor Pir
#define relay1 7 // Relay pompa air
#define relay2 8 // Relay lampu
int relay_on = 0;
int relay_off = 1;
void setup() {
   // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); // Menjadikan trigPin menjadi OUTPUT
  pinMode(echoPin, INPUT); // Menjadikan echoPin menjadi INPUT
  pinMode(PIR, INPUT); // menjadikan PIR menjadi INPUT
  pinMode(relay1, OUTPUT); // Menjadikan relay1 menjadi OUTPUT
  pinMode(relay2, OUTPUT); // Menjadikan relay2 menjadi OUTPUT

}
  
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, HIGH);
  delay (10);
  digitalWrite(trigPin, LOW);
  double data = pulseIn(echoPin, HIGH);
  double jarak = 0.0343 *(data/2);
  double onpir = digitalRead(PIR);

  Serial.println(jarak);
  Serial.println(onpir);
  
  if (jarak > 5 && onpir == LOW){
    digitalWrite(relay1, relay_on);
    digitalWrite(relay2, relay_off);
  } else if (jarak <= 5 && onpir == LOW){
    digitalWrite(relay1,relay_off);
    digitalWrite(relay2,relay_off);
  } else if (jarak >= 12 && onpir == HIGH){
    digitalWrite(relay1, relay_on);
    digitalWrite(relay2, relay_on);
  } else if (jarak <= 5 && onpir == HIGH){
    digitalWrite(relay1, relay_off);
    digitalWrite(relay2, relay_on);
  }
  
  delay(10);
}

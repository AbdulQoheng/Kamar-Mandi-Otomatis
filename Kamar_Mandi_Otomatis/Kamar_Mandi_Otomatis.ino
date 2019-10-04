#define echoPin 11 //Echo Pin ultra sonik
#define trigPin 12 //Trigger Pin ultra sonik
#define PIR 10 // Sensor Pir
#define relay1 7 // Relay pompa air
#define relay2 8 // Relay lampu

void setup() {
   // put your setup code here, to run once:
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

  if (jarak > 5 && onpir == LOW){digitalWrite(relay1, HIGH);
    digitalWrite(relay2, LOW);
  } else if (jarak <= 5 && onpir == LOW){
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
  } else if (jarak >= 50 && onpir == HIGH){
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, HIGH);
  } else if (jarak <= 5 && onpir == HIGH){
    digitalWrite(relay1, LOW);
  }
  
  digitalWrite(relay2, HIGH);
  delay(500);
}

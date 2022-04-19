//Smoke Sensor Module
//The Creative TechArt

#define sensor A0
int green_led = 4;
int red_led = 5;
int buzzer = 6;
int Thershold_value = 300;

void setup() {
  Serial.begin(9600);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int analogValue = analogRead(sensor);
  Serial.println(analogValue);
  if(analogValue >= Thershold_value){
    digitalWrite(red_led,HIGH);
    tone(buzzer,1000,1000);
  }
  else{
    digitalWrite(green_led,HIGH);
  }
  

}

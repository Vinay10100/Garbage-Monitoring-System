#include <LiquidCrystal.h> //Load Liquid Crystal Library
const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal LCD(rs, en, d4, d5, d6, d7);
#define trigPin 10//Sensor Echo pin connected to Arduino pin 13
#define echoPin 9 //Sensor Trip pin connected to Arduino pin 12
const int buzzer = 8;
const int LED = 13;
const int LED1 = 7;
const int LED2 = 2;
float duration, distance;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
   pinMode(LED, OUTPUT);
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   LCD.begin(16,2); //Tell Arduino to start your 16 column 2 row LCD
  LCD.setCursor(0,0);  //Set LCD cursor to upper left corner, column 0, row 0
  
  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  LCD.print("STATUS:");
  LCD.setCursor(5, 1);
  LCD.print(distance);
  if(distance>14){
    digitalWrite(LED2, HIGH);
     LCD.print("EMPTY ");
    delay(1000);
  }else{
     digitalWrite(LED2, LOW);
  }
  if(distance<14 && distance >5){
    digitalWrite(LED1, HIGH);
    
    LCD.print("HALF FILLED ");
    delay(1000);
  }else{
     digitalWrite(LED1, LOW);
  }
  if(distance<5){
    digitalWrite(buzzer,HIGH);
    digitalWrite(LED, HIGH);
    LCD.print("TIME TO CLEAN!!! ");
    delay(10);
  }else{
    digitalWrite(buzzer,LOW);
     digitalWrite(LED, LOW);
  }
}

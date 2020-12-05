

// ACCESS SERVO WHICH RELEASES SOUND WAVES.
//VCC =  power supply 
//TRIG = emits soundwaves 
//ECHO = pin produces a pulse when the reflected signal is received
//GROUND = ground of arduino
//VIN = power pin
#include <Servo.h>. 
const int trigPin = 10;
const int echoPin = 11;
// Variables for  duration and the distance
long duration;
int distance;
Servo myServo; // Creates a servo object for controlling the servo motor
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // ??(NOT SURE WHY 9600)
  myServo.attach(12); // pin is the servo motor attached
}
void loop() {
  // rotates motor from 15 to 165 degrees (WHY 15-165 degrees?)
  for(int i=15;i<=165;i++){  
  myServo.write(i);
  delay(30); //why delay 30 
  distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree

  //printing directly to aruino port?
  Serial.print(i); 
  Serial.print(",");
  Serial.print(distance); 
  Serial.print("."); 
  }
  // Repeats the previous lines from 165 to 15 degrees
  for(int i=165;i>15;i--){  
  myServo.write(i);
  delay(30);
  distance = calculateDistance();
  Serial.print(i);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(".");
  }
}
// calculating distance? What is high and low? 
int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= duration*0.034/2;
  return distance;
}

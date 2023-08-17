// Define IR sensor pins
const int irSensor1Pin = 2;
const int irSensor2Pin = 3;
const int irSensor3Pin = 4;

// Define LED pins
const int led1Pin = 5;
const int led2Pin = 6;
const int led3Pin = 7;

void setup() {
  // Initialize IR sensors as input
  pinMode(irSensor1Pin, INPUT);
  pinMode(irSensor2Pin, INPUT);
  pinMode(irSensor3Pin, INPUT);
  
  // Initialize LEDs as output
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  
  // Turn off all LEDs initially
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, LOW);
  digitalWrite(led3Pin, LOW);
}

void loop() {
  // Read the status of IR sensors
  int irSensor1Status = digitalRead(irSensor1Pin);
  int irSensor2Status = digitalRead(irSensor2Pin);
  int irSensor3Status = digitalRead(irSensor3Pin);
  
  // Check if any IR sensor detects an object
  if (irSensor1Status == HIGH) {
    digitalWrite(led1Pin, HIGH); // Turn on LED 1
  } else {
    digitalWrite(led1Pin, LOW);  // Turn off LED 1
  }
  
  if (irSensor2Status == HIGH) {
    digitalWrite(led2Pin, HIGH); // Turn on LED 2
  } else {
    digitalWrite(led2Pin, LOW);  // Turn off LED 2
  }
  
  if (irSensor3Status == HIGH) {
    digitalWrite(led3Pin, HIGH); // Turn on LED 3
  } else {
    digitalWrite(led3Pin, LOW);  // Turn off LED 3
  }
  
  // You can add additional logic or conditions here as needed
  
  // Delay for a short period to prevent rapid toggling
  delay(100);
}

/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
char devid[] = "v063F79B82775723";
const int ledPin =  8;
const int ledPinRed =  7;
const int ledPinBlue =  6;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinBlue, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int
  sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(750);
  
   if (sensorValue > 200) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
   if (sensorValue < 200) {
    // turn LED on:
    digitalWrite(ledPinRed, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPinRed, LOW);
  }// delay in between reads for stability
  if (sensorValue < 75) {
    // turn LED on:
    digitalWrite(ledPinBlue, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPinBlue, LOW);
}
}


#define ledPin 4
int status = 0;
void setup() {
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);
Serial.begin(9600); 
}
void loop() {
// Checks if the data is coming from the serial port
if(Serial.available() > 0){
	status = Serial.read(); // Read the data from the serial port
}
Deciding functions for LED on and off
if (status == '0') {
digitalWrite(ledPin, LOW); // Turn LED OFF
// Send back, to the phone, the String "LED: ON"
Serial.println("LED: OFF");
status = 0;
}
else if (status == '1') {
digitalWrite(ledPin, HIGH);
Serial.println("LED: ON");;
status = 0;
}
}

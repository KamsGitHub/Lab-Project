
// defining the pins
const int trigPin = 9;
const int echoPin = 10;
// defining variables
long duration;
float distance;
void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}
void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= float(duration*0.034)/float(2);

    //val is reading of magnetic hall probe
    int val = analogRead(A0);
    Serial.print(distance);
    Serial.print(',');
    Serial.println(val);
    delay(1);
}

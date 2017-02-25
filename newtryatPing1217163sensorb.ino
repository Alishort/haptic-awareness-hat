/* Ping))) Sensor

   This sketch reads a PING))) ultrasonic rangefinder and returns the
   distance to the closest object in range. To do this, it sends a pulse
   to the sensor to initiate a reading, then listens for a pulse
   to return.  The length of the returning pulse is proportional to
   the distance of the object from the sensor.

   The circuit:
  * +V connection of the PING))) attached to +5V
  * GND connection of the PING))) attached to ground
  * SIG connection of the PING))) attached to digital pin 7

   http://www.arduino.cc/en/Tutorial/Ping

   created 3 Nov 2008
   by David A. Mellis
   modified 30 Aug 2011
   by Tom Igoe

   This example code is in the public domain.

 */

// this constant won't change.  It's the pin number
// of the sensor's output:
const int pingPin = 3;
const int pingPin02 = 5;
const int pingPin03 = 6;
const int pingPin04 = 9;

void setup() {
  // initialize serial communication:
  Serial.begin(115200);
}

void loop() {
  // establish variables for duration of the ping,
  // and the distance result in inches and centimeters:
  long duration, inches;
  long duration02, inches02;
   long duration03, inches03;
   long duration04, inches04;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  delayMicroseconds(2);
  digitalWrite(3, HIGH);
  delayMicroseconds(5);
  digitalWrite(3, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(3, INPUT);
  duration = pulseIn(3, HIGH);

 // convert the time into a distance
  inches = microsecondsToInches(duration);

delay(5);

 // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  //for second sensor
  pinMode(pingPin02, OUTPUT);
  digitalWrite(pingPin02, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin02, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin02, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(pingPin02, INPUT);
  duration02 = pulseIn(pingPin02, HIGH);

  // convert the time into a distance
  inches02 = microsecondsToInches(duration02);

delay(5);


 // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  //for second sensor
  pinMode(pingPin03, OUTPUT);
  digitalWrite(pingPin03, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin03, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin03, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(pingPin03, INPUT);
  duration03 = pulseIn(pingPin03, HIGH);

  // convert the time into a distance
  inches03 = microsecondsToInches(duration03);

delay(5);

    Serial.print(inches);
   Serial.print(" "); // print a space
    Serial.print(inches02);
   Serial.print(" "); // print a space
    Serial.print(inches03);
   Serial.print(" "); // print a space
    Serial.print(inches04);
   Serial.print(" "); // print a space
 Serial.println(); // print a line-feed

}

long microsecondsToInches(long microseconds) {
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

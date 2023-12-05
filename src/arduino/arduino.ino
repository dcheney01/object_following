#include <Servo.h>

Servo yawServo;
Servo pitchServo;

const int yawServoPin{9};
const int pitchServoPin{10};

int yawCmd{90};
int pitchCmd{80};

void setup() {
  yawServo.attach(yawServoPin);
  pitchServo.attach(pitchServoPin);

  Serial.begin(9600);
  Serial.flush();
}

void loop() {  
  if (Serial.available() >= 3) {
    char firstChar = Serial.peek();

    if (isdigit(firstChar) || firstChar == '-' || firstChar == ' ') {
      yawCmd += Serial.parseInt();
      char nextChar = Serial.peek();

      if (isdigit(nextChar) || nextChar == '-' || nextChar == ' ') {
        pitchCmd += Serial.parseInt();
        Serial.read();

      if (pitchCmd > 135) pitchCmd = 135;
      if (pitchCmd < 45) pitchCmd = 45;
      if (yawCmd > 180) yawCmd = 180;
      if (yawCmd < 0) yawCmd = 0;

      yawServo.write(yawCmd);
      pitchServo.write(pitchCmd);
      } 
      else {
        Serial.println("Invalid data. Clearing buffer.");
        clearSerialBuffer();
      }
    } 
    else 
    {
      Serial.println("Invalid data. Clearing buffer.");
      clearSerialBuffer();
    }
  }

  Serial.print("Yaw cmd: ");
  Serial.print(yawCmd);
  Serial.print(", Pitch cmd: ");
  Serial.println(pitchCmd);
  Serial.println();
}

void clearSerialBuffer() {
  while (Serial.available() > 0) {
    Serial.read();
  }
}
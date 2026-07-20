#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

unsigned long startTime;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  startTime = millis();
}

void loop()
{
  
  while (millis() - startTime < 2000)
  {
    for (int angle = 0; angle <= 180; angle++)
    {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(5);

      if (millis() - startTime >= 2000)
        break;
    }

    for (int angle = 180; angle >= 0; angle--)
    {
      servo1.write(angle);
      servo2.write(angle);
      servo3.write(angle);
      servo4.write(angle);
      delay(5);

      if (millis() - startTime >= 2000)
        break;
    }
  }

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  while (true)
  {
  
  }
}
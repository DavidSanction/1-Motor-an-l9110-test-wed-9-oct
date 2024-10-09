This is a test of connecting a 6v motor to the L9110 H bridge, controlled by an ESP 32 devkit


Explanation
- **Pin Definitions**: The motor control pins for the L9110S are defined with specific GPIO numbers.
  - `motorPWMPin` is set to GPIO 16.
  - `motorDirPin1` is set to GPIO 2.
  - `motorDirPin2` is set to GPIO 4.
- **PWM Channel**: One PWM channel is defined for the motor.
- **PWM Properties**: The PWM frequency is set to 5 kHz, and the resolution is set to 8 bits.
- **Setup Function**: The [`setup`](command) function initializes the motor control pins as outputs, attaches the motor PWM pin to a PWM channel, and configures the PWM channel.
- **Loop Function**: The [`loop`] function continuously turns the motor in one direction for 5 seconds and then reverses the direction for another 5 seconds. The motor speed is set to full speed using PWM.

This code will control the motor to turn in one direction for 5 seconds and then reverse direction for another 5 seconds, using the specified GPIO pins on the ESP32.

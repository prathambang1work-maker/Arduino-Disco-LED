// Arduino LED Chaser using For Loop
// Author: Pratham Bang
// Description: Sequentially turns ON LEDs from pin 13 to 8 using a loop.

int leds[] = {13, 12, 11, 10, 9, 8};
int numLeds = 6;

void setup() {
  // Set all LED pins as OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Forward LED chase
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);

    if (i > 0) {
      digitalWrite(leds[i - 1], LOW);
    }

    delay(100);
  }

  // Turn OFF last LED after loop ends
  digitalWrite(leds[numLeds - 1], LOW);
}

# Arduino LED Chaser (For Loop Version)

## 📌 Overview

This project demonstrates a **LED chasing pattern** using multiple LEDs connected to an Arduino board. Unlike basic implementations, this version uses **arrays and for loops** to create clean and scalable code.

---

## 🚀 What I Learned

* Using arrays in Arduino
* Implementing `for` loops for efficient control
* Writing scalable and optimized embedded code
* Controlling multiple LEDs dynamically

---

## 🛠️ Components Used

* Arduino Board (Uno / Nano / etc.)
* 6 LEDs
* 6 Resistors (220Ω recommended)
* Breadboard
* Jumper wires

---

## ⚙️ Circuit Connection

* LEDs connected to pins: 13, 12, 11, 10, 9, 8
* All LEDs connected through resistors to GND

---

## 💻 Code

```cpp id="m2l8q1"
int leds[] = {13, 12, 11, 10, 9, 8};
int numLeds = 6;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);

    if (i > 0) {
      digitalWrite(leds[i - 1], LOW);
    }

    delay(100);
  }

  digitalWrite(leds[numLeds - 1], LOW);
}
```

---

## 📷 Output

(Add your project image here)

---

## 📈 Future Improvements

* Reverse direction (ping-pong effect)
* Add speed control using potentiometer
* Use PWM for fading effect
* Create multiple animation modes

---

## 📚 Author

**Pratham Bang**
Electrical & Computer Engineering

---

## ⭐ Note

This project is part of my journey into Arduino and embedded systems, focusing on writing efficient and scalable code.

#include <util/delay.h>

// declaration of LEDs PINs
int LED1 = 1;
int LED2 = 5;
int LED3 = 3;
int LED4 = 4;

const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), myISR, CHANGE);
  // Initial status
  digitalWrite (LED1,LOW);
  digitalWrite (LED2,LOW);
  digitalWrite (LED3,LOW);
  digitalWrite (LED4,LOW);
}

void loop() {
  if (state == HIGH) {
    digitalWrite (LED2,HIGH);
    digitalWrite (LED3,LOW);
    digitalWrite (LED4,LOW);
    digitalWrite(LED1, LOW);
  } else {
    _delay_ms(500); 
    digitalWrite (LED1,HIGH);
    digitalWrite (LED4,HIGH);
    digitalWrite (LED2,LOW);
    digitalWrite (LED3,LOW);
    _delay_ms(1000); // 1Hz = 1Second
    digitalWrite (LED1,LOW);
    digitalWrite (LED4,LOW);
    _delay_ms(1000); // 1Hz = 1Second
  }
}

void myISR() {
  state = !state;
}
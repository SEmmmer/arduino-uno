#include <Arduino.h>
#include "music.h"
#include "loveRiver.h"

int pinBuzzer = 10;

void setup() {
    pinMode(pinBuzzer, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    playLoveRiver();
    delay(10000);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
}


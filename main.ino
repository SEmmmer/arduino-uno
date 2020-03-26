#include <Arduino.h>

#define downDo 261
#define downRe 293
#define downMi 329
#define downFa 349
#define downSo 391
#define downLa 440
#define downXi 493

#define midDo 523
#define midRe 587
#define midMi 659
#define midFa 698
#define midSo 783
#define midLa 880
#define midXi 987

#define upDo 1046
#define upRe 1174
#define upMi 1318
#define upFa 1396
#define upSo 1567
#define upLa 1760
#define upXi 1975

int pinBuzzer = 10;

void sayTone(int tones, int time) {
    tone(pinBuzzer, tones);
    delay(time - 70);
    noTone(pinBuzzer);
    delay(70);
}

void setup() {
    pinMode(pinBuzzer, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop() {
    int oneLine = 300;
    int twoLine = 150;
    int noLine = 600;

    sayTone(downLa, twoLine);
    sayTone(midDo, twoLine);

    sayTone(midRe, twoLine);
    sayTone(midRe, twoLine);
    sayTone(midRe, twoLine);
    sayTone(midRe, twoLine);

    sayTone(midRe, oneLine);
    sayTone(midMi, twoLine);
    sayTone(midFa, twoLine);

    sayTone(midFa, oneLine);
    sayTone(midMi, oneLine);
    delay(110);

    sayTone(midDo, oneLine);
    sayTone(midRe, oneLine);

    sayTone(midMi, oneLine);
    sayTone(midMi, oneLine);

    sayTone(midSo, oneLine);
    sayTone(midLa, twoLine);
    sayTone(midLa, twoLine);

    sayTone(midLa, oneLine);
    sayTone(midDo, oneLine);

    sayTone(midDo, oneLine);
    sayTone(midMi, oneLine);
    delay(30);

    sayTone(midRe, oneLine);
    sayTone(midDo, oneLine);
    delay(30);

    sayTone(midDo, oneLine);
    sayTone(midRe, oneLine);

    sayTone(midMi, noLine);
    delay(70);

    sayTone(midDo, oneLine);
    sayTone(midRe, oneLine);

    sayTone(midMi, oneLine);
    sayTone(midMi, oneLine);

    sayTone(midSo, oneLine);
    sayTone(midLa, twoLine);
    sayTone(midLa, twoLine);

    sayTone(midLa, oneLine);
    sayTone(midDo, oneLine);
    delay(30);

    sayTone(midDo, oneLine);
    sayTone(midMi, oneLine);
    delay(30);

    sayTone(midRe, oneLine);
    sayTone(midDo, oneLine);
    sayTone(midDo, oneLine);
    sayTone(downXi, oneLine);
    delay(30);
    sayTone(midDo, noLine);


    delay(10000);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(500);
}


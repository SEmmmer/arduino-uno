#include <Arduino.h>

#define downDo 261
#define downRe 293
#define downMi 329
#define downFa 349
#define downSo 391
#define downRa 440
#define downXi 493

#define midDo 523
#define midRe 587
#define midMi 659
#define midFa 698
#define midSo 783
#define midRa 880
#define midXi 987

#define upDo 1046
#define upRe 1174
#define upMi 1318
#define upFa 1396
#define upSo 1567
#define upRa 1760
#define upXi 1975

int pinBuzzer = 10;
void sayTone(int tones, int time) {
    tone(pinBuzzer, tones);
    delay(time);
    noTone(pinBuzzer);
}

void setup() {
    pinMode(pinBuzzer, OUTPUT);
}

void loop() {
    sayTone(midDo, 500);
    sayTone(midRe,500);
    sayTone(midMi,500);
    sayTone(midRe,500);


}


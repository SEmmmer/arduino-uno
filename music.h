//
// Created by Shirakami Emmmer on 2020/3/27.
//

#ifndef ARDUINO_HELLO_MUSIC_H
#define ARDUINO_HELLO_MUSIC_H

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

#define oneLine 300
#define twoLine 150
#define noLine 600

void sayTone(int tones, int time) {
    tone(10, tones);
    delay(time - 30);
    noTone(10);
    delay(30);
}

#endif //ARDUINO_HELLO_MUSIC_H

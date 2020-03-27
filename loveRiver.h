//
// Created by Shirakami Emmmer on 2020/3/27.
//

#ifndef ARDUINO_HELLO_LOVERIVER_H
#define ARDUINO_HELLO_LOVERIVER_H

void playLoveRiver() {
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
    delay(80);

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
}

#endif //ARDUINO_HELLO_LOVERIVER_H

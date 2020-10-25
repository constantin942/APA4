#include "Sound.h"

int Sound::getNum() {
    return sound;
}

void Sound::aleaGenVal() {
    sound = rand()%100;
}
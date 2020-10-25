#ifndef AP4A_PROJECT1_SOUND_H
#define AP4A_PROJECT1_SOUND_H
#include "Sensor.h"

class Sound : public Sensor
{
protected:
    int sound;
public:
    int getNum();
    void aleaGenVal();

};
#endif //AP4A_PROJECT1_SOUND_H

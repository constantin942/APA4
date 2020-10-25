#ifndef AP4A_PROJECT1_LIGHT_H
#define AP4A_PROJECT1_LIGHT_H
#include "Sensor.h"

class Light : public Sensor{
protected:
    int light;
public:
    int getNum();
    void aleaGenVal();
};
#endif //AP4A_PROJECT1_LIGHT_H

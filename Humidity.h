#ifndef AP4A_PROJECT1_HUMIDITY_H
#define AP4A_PROJECT1_HUMIDITY_H
#include"Sensor.h"

class Humidity : public Sensor{
protected:
    float humidity;
public:
    float getData();
    void aleaGenVal();
};
#endif //AP4A_PROJECT1_HUMIDITY_H

#ifndef AP4A_PROJECT1_TEMPERATURE_H
#define AP4A_PROJECT1_TEMPEPRATURE_H
#include "Sensor.h"

class Temperature : public Sensor {
protected:
    float temperature;
public:
    float getData();
    void aleaGenVal();
};

#endif //AP4A_PROJECT1_TEMPERATURE_H

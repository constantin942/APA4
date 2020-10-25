#ifndef AP4A_PROJECT1_SENSOR_H
#define AP4A_PROJECT1_SENSOR_H
#include<cstdlib>
/**
 * @author Yuxiang_LI
 * @file Sensor.h
 */

class Sensor{
protected:

public:
    virtual int getNum();
    virtual float getData();
    virtual  void aleaGenVal() = 0;
};
#endif //AP4A_PROJECT1_SENSOR_H

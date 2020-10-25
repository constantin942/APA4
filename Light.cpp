#include "Light.h"
int Light::getNum() {
    return light;
}

void Light::aleaGenVal() {
    light=rand()%1000;
}
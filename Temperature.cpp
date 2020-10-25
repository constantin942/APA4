#include "Temperature.h"

float Temperature::getData() {
    return temperature;
}

void Temperature::aleaGenVal() {
    temperature = rand()%40;
}
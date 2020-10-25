#include "Humidity.h"

float Humidity::getData() {
    return humidity;
}

void Humidity::aleaGenVal() {
    humidity = rand()%100;
}
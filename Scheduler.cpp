#include<time.h>
#include"Scheduler.h"
#include"Temperature.h"
#include "Humidity.h"
#include "Sound.h"
#include "Light.h"

using namespace std;

void Scheduler::rcvHumidity() {
    srand(time(0));
    Humidity h;
    h.aleaGenVal();
    humidity = h.getData();
}

void Scheduler::rcvTemp() {
    srand(time(0));
    Temperature t;
    t.aleaGenVal();
    temp = t.getData();
}

void Scheduler::rcvSound() {
    srand(time(0));
    Sound s;
    s.aleaGenVal();
    sound = s.getNum();
}

void Scheduler::rcvLight() {
    srand(time(0));
    Light l;
    l.aleaGenVal();
    light = l.getNum();
}

void Scheduler::rcvData(int dis) {
    if(dis = 1)
    {
        rcvHumidity();
    }

    if(dis = 2)
    {
        rcvTemp();
    }

    if(dis = 3)
    {
        rcvSound();
    }

    if(dis = 4)
    {
        rcvLight();
    }
}
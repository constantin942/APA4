#ifndef AP4A_PROJECT1_SCHEDULER_H
#define AP4A_PROJECT1_SCHEDULER_H
/**
 * @author Yuxiang_LI
 * @file Scheduler.h
 */
class Scheduler{
private:
    float humidity;
    float temp;
    int sound;
    int light;
public:
    void rcvHumidity();
    void rcvTemp();
    void rcvSound();
    void rcvLight();
    void rcvData(int dis);

    friend class Serveur;
};
#endif //AP4A_PROJECT1_SCHEDULER_H

#ifndef AP4A_PROJECT1_SERVEUR_H
#define AP4A_PROJECT1_SERVEUR_H
#include"Scheduler.h"
#include<iostream>
/**
 * @author Yuxiang LI
 * @file Serveur.h
 */

class Serveur {
private:
    bool consolActivation;
    bool logActivation;
    Scheduler scheduler;
    int distinction;
public:
    Serveur();
    Serveur(float humi, float temp, int sound, bool light);
    Serveur(const Serveur& serveur);
    ~Serveur();
    Serveur& operator=(const Serveur& serveur);

    void setLogActivation(char c);
    void setConsolActivation(char c);
    void fileWrite(std::ofstream& fichier)const;
    void consolWrite(std::ostream& flux)const;
    void dataRcv(int i);
    void getdis(int dis);

    friend class Scheduler;
};

std::ofstream& operator<<(std::ofstream& fichier, Serveur const& serveur);
std::ostream& operator<<(std::ostream& flux, Serveur const& serveur);

#endif //AP4A_PROJECT1_SERVEUR_H

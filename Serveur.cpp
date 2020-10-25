#include<iostream>
#include "Serveur.h"
#include<fstream>

using namespace std;

Serveur::Serveur(float humi, float temp, int sound, bool light){
    scheduler.humidity = humi;
    scheduler.temp = temp;
    scheduler.sound = sound;
    scheduler.light = light;
}

void Serveur::setLogActivation(char c) {
    if ( c == 'Y')
    {
        logActivation = true;
    }
    else
    {
        logActivation = false;
    }
}

void Serveur::setConsolActivation(char c) {
    if (c == 'Y')
    {
        consolActivation = true;
    }
    else
    {
        consolActivation = false;
    }
}

void Serveur::getdis(int dis) {
    distinction = dis;
}

void Serveur::dataRcv(int i) {
    scheduler.rcvData(i);
}

void Serveur::fileWrite(std::ofstream &fichier) const {
    if(logActivation==true)
    {
        if(distinction==1)
            fichier << scheduler.humidity << "g/m³";
        if(distinction==2)
            fichier << scheduler.temp << "°C";
        if(distinction==3)
            fichier << scheduler.sound << "dB";
        if(distinction==4)
            fichier << scheduler.light << "lx";
    }
}

void Serveur::consolWrite(std::ostream &flux) const {
    if(consolActivation==true)
    {
        flux << scheduler.humidity << "g/m³";
        flux << scheduler.temp << "°C";
        flux << scheduler.sound << "dB³";
        flux << scheduler.light << "lx³";
    }
}

Serveur& Serveur::operator=(const Serveur &serveur) {
    consolActivation = serveur.consolActivation;
    logActivation = serveur.logActivation;
    scheduler = serveur.scheduler;
    distinction = serveur.distinction;
    return *this;
}

std::ofstream& operator<<(std::ofstream& fichier, Serveur const& serveur){
    serveur.fileWrite(fichier);
    return fichier;
}

std::ostream& operator<<(std::ostream& flux, Serveur const& serveur){
    serveur.consolWrite(flux);
    return flux;
}

#include <iostream>
#include <fstream>
#include "Serveur.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Sound.h"
#include "Light.h"
#include <thread>

using namespace std;

int main(){
    ofstream H("D:/CLion_project/AP4A_project1/data_humidity.txt");
    ofstream T("D:/CLion_project/AP4A_project1/data_temperature.txt");
    ofstream S("D:/CLion_project/AP4A_project1/data_sound.txt");
    ofstream L("D:/CLion_project/AP4A_project1/data_light.txt");

    float a=0,b=0;
    int c=0;
    bool d=0;

    int compteur=0;

    char reponseLog = ' ';
    while(reponseLog != 'O' && reponseLog != 'N')
    {
        cout << "Voulez-vous stocker les données renvoyées par les capteurs ? (O/N)" << endl; /// On demande à l'utilisateur si il veut stocker ces données
        cin >> reponseLog;
        cout << endl;
    }

    char reponseConsol = ' ';
    while(reponseConsol != 'O' && reponseConsol != 'N')
    {
        cout << "Voulez-vous afficher les données renvoyées par les capteurs ? (O/N)" << endl; /// On demande à l'utilisateur si il souhaite afficher les données dans la console
        cin >> reponseConsol;
        cout << endl;
    }

    Serveur boeing(a,b,c,d); /// On initialise notre serveur avec nos variables égales à 0

    boeing.dataRcv(8); /// On reçoit les premières données du Scheduler (qui proviennent des capteurs) - on met 8 en paramètre puisque c'est la première réception de donnée et que l'on veut
    /// par conséquent que les 4 données soient réceptionnées en même temps

    boeing.setConsolActivation(reponseConsol);
    boeing.setLogActivation(reponseLog);

    cout << boeing << endl; /// On affiche boeing dans la console si l'utilisateur le désire


    if(H && T && S && L)
    {
        boeing.getdis(1);           /// Et on les stocke (ou non)
        H << boeing << endl;

        boeing.getdis(2);
        T << boeing << endl;

        boeing.getdis(3);
        S << boeing << endl;

        boeing.getdis(4);
        L << boeing << endl;
    }

    else
    {
        cout <<" ERREUR : impossible d'ouvrir le fichier." << endl;
    }


    for(int i=0;i<100;i++)    /// Faire varier i en fonction du temps de vol où l'on veut surveiller les données des capteurs
    {
        boeing.dataRcv(compteur);

        cout << boeing << endl; /// Les nouvelles valeurs sont arrivées, on les affiche (ou non)

        if(H && T && S && L)
        {
            boeing.getdis(1);               /// Et on les stocke (ou non)
            H << boeing << endl;

            boeing.getdis(2);
            T << boeing << endl;

            boeing.getdis(3);
            S << boeing << endl;

            boeing.getdis(4);
            L << boeing << endl;
        }
        else
        {
            cout <<" ERREUR : impossible d'ouvrir le fichier." << endl;
        }

        this_thread::sleep_for(chrono::seconds(1)); /// On met en pause le programme le temps d'une seconde (modifiable)

        compteur++;  /// Sert dans dataRcv à savoir quelles données recevoir (fréquence)
    }

    return 0;

}
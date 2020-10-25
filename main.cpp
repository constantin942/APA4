#include <iostream>
#include <fstream>
#include "Serveur.h"
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

    char reponseLog = ' ';
    while(reponseLog != 'Y' && reponseLog != 'N')
    {
        cout << "Do you want to store the data ? (Y/N)" << endl;
        cin >> reponseLog;
        cout << endl;
    }

    char reponseConsol = ' ';
    while(reponseConsol != 'Y' && reponseConsol != 'N')
    {
        cout << "Do you want to see the data ? (Y/N)" << endl;
        cin >> reponseConsol;
        cout << endl;
    }

    Serveur example(a,b,c,d);

    example.dataRcv(0);
    example.setConsolActivation(reponseConsol);
    example.setLogActivation(reponseLog);

    cout << example << endl;


    if(H && T && S && L)
    {
        example.getdis(1);
        H << example << endl;

        example.getdis(2);
        T << example << endl;

        example.getdis(3);
        S << example << endl;

        example.getdis(4);
        L << example << endl;
    }

    else
    {
        cout <<" ERREUR 1 " << endl;
    }


    for(int i=0;i<20;i++)
    {
        example.dataRcv(0);

        cout << example << endl;

        if(H && T && S && L)
        {
            example.getdis(1);
            H << example << endl;

            example.getdis(2);
            T << example << endl;

            example.getdis(3);
            S << example << endl;

            example.getdis(4);
            L << example << endl;
        }
        else
        {
            cout <<" ERREUR 2 " << endl;
        }

        this_thread::sleep_for(chrono::seconds(1));

    }

    return 0;

}
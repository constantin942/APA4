//#include<stdio.h>
//#include<string.h>
//#include<iostream>
////
//// Created by cstt on 2020/9/30.
////
//class vecteur{
//private:
//    int taille;
//    float* v;
//public:
//    vecteur(int t){ taille = t; };
//    vecteur(const vecteur&);
//
//    ~vecteur(void);
//    vecteur& operator=(const  vecteur&);
//    vecteur operator+(const  vecteur&);
//    vecteur& operator++(void);
//    vecteur operator++(int);
//};
//
////main(){
////    vecteur u("5 5 5"), v("2 2 2"), w("1 2 3 "), z("4 2 0");
////
////}
//
////vecteur vecteur::operator+(const vecteur &b) {
////    vecteur c(taille);
////
////    for (int i = 0; i < taille && i < b.taille; i++)
////        c.v[i]=v[i] + b[i];
////    return c;
////}
//
//vecteur vecteur::operator+(const vecteur &b) {
//    vecteur* c;
//    c= new vecteur(taille);
//
//    for (int i = 0; i < taille && i < b.taille; i++)
//        c->v[i]=v[i] + b[i];
//    return *c;
//}
//
//vecteur& vecteur::operator++(void) {
//    for(int i=0; i<taille; i++)
//        v[i]++;
//    return *this;
//}
//
//vecteur vecteur::operator++(int n) {
//    vecteur R = *this;
//    for (int i = 0; i < taille; i++)
//        v[i]++;
//    return R;
//}
//
///* le contenu à 07/10 */
///* nouveaux choses*/
//
//class Chaine{
//private:
//    char* tab;
//    int longeur;
//    int capacite;
//    enum {CAPACITE_DEFAUT=16};
//public:
//    Chaine(int capacite =CAPACITE_DEFAUT):capacite(capacite),longeur(0),tab(NULL){};
//    Chaine(char *ch){
//        int lChaine = strlen(ch);
//        int module = lChaine % CAPACITE_DEFAUT;
//        if(module)
//            capacite=(lChaine/CAPACITE_DEFAUT+1)*CAPACITE_DEFAUT;
//        else
//            capacite = lChaine;
//        longeur = lChaine;
//        tab = new char[capacite];
//        strcpy(tab,ch);
//    }
//    Chaine(const Chaine& uneChaine):capacite(uneChaine.capacite),longeur(uneChaine.longeur){
//        tab = new char[capacite];
//        strcpy(tab, uneChaine.tab);
//    }
//    ~Chaine(){if(tab) delete []tab;}
//    Chaine& operator=(const Chaine& uneChaine){
//        if(tab) delete []tab;
//        capacite = uneChaine.capacite;
//        longeur=uneChaine.longeur;
//        tab = new char[capacite];
//        strcpy(tab,uneChaine.tab);
//        return *this;
//    }
//};
//
//template< class T>
//class element{
//private:
//    element *soir;
//    T data;
//public:
//    element():soir(NULL){};
//    element(const element& e){
//        soir=e.soir;
//        data=e.data;}
//    ~element(){};
//    element& operator=(const element &e){
//        soir=e.soir;
//        data=e.data;
//        return *this;
//    }
//};
//
//class teste{
//private:
//    element *tete, *fun ,*cour;
//public:
//    teste():tete(NULL),fun(NULL),cour(NULL){};
//    teste(const teste& l):tete(NULL), fun(NULL), cour(NULL){*this + l;}
//
//};
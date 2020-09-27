#ifndef APA4_H
#define APA4_H
/**
 * @author Yuxiang_LI
 * @file APA4.h
 * @date27/09/2020
 * @brief Description de la classe
 */

#include <iostream>
#include <stdio.h>
#include <fstream>

class Type {

};

class Server{
private:
    bool consolActivation;
    bool logActivation;
    void fileWrite(Type type);
    void consolWrite(Type type);
public:
    Server(){};
    ~Server(){};
    Server(Server &server){
       consolActivation=server.consolActivation;
       logActivation=server.logActivation;
    };
    void operator=(Server &server);
    void operator>>(Type type);
    void operator<(Type type);
    void dataRcv (Type type);
};

void Server::operator=(Server &server) {
    Server server1;
    server1.consolActivation=server.consolActivation;
    server1.logActivation=server.logActivation;
}

std::istream & operator >> (std::istream &in, Server &a)
{

}

template < class T >
class Sensor {
public:
    Sensor(){};
    Sensor(Sensor &sensor);
    Sensor(T t);
    ~Sensor(){};
    T getData();

protected:
    T aleaGenVal();
};

template < class T >
class Temperature : public Sensor< T >{
private:
    float temp;
public:

};

template < class T >
class Humidity : public Sensor< T >{
private:
    float humi;
public:

};

#endif
#pragma once
#include <iostream>
#include <cstring>
#include <random>
using namespace std;


class Card {
private:
    unsigned long number;
    char* name;
    char expiredDate[6];
    int pin;
    float cash;

public:
    Card();    
    Card(const char* name, const char* expDate, float cash);
    ~Card(); 

    void showInfo();

    void setName(const char* usname);
    void setPin(int old_pin, int new_pin);


    unsigned long getNum();
    const char* getName();
    const char* getExpDate();
    int getPin();
    float getCash();
};


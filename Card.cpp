#include "Card.h"

Card::Card() {
    number = rand() + rand() * 10000;
    name = new char[10] {"undefined"};
    strcpy_s(expiredDate, 6, "01.45");  
    pin = rand() % 8999 + 1000;
    cash = 100;
    cout << "Create a standart card! " << number << endl;
}

Card::Card(const char* name, const char* expDate, float cash) {
    number = rand() + rand() * 10000;

    int size_name = strlen(name) + 1; 
    this->name = new char[size_name]; 
    strcpy_s(this->name, size_name, name);
    

    strcpy_s(expiredDate, 6, expDate);
  

    pin = rand() % 8999 + 1000;
    this->cash = cash;
    cout << "Create a VIP card! " << number << endl;
}

Card::~Card() {
    delete[] name;
    cout << "Closed " << number << " card!\n";
}

void Card::showInfo() {
    cout << "====================================\n";
    cout << "Client: " << name << endl;
    cout << "Card: " << number << " Exp date: " << expiredDate << endl;
    cout << "-------------------------------------\n";
    cout << "Cash: " << cash << "UAH";
    cout << "PIN: " << pin << endl;
    cout << "====================================\n\n";
}

void Card::setName(const char* usname)
{
    if (strlen(usname) < 3) {
        cout << "\nEror: short name!\n";
    }
    else {
        delete[] name;
        int size_name = strlen(usname) + 1;
        name = new char[size_name];
        strcpy_s(name, size_name, usname);
    }
}

void Card::setPin(int old_pin, int new_pin)
{
    if (old_pin != pin && new_pin >= 1000 && new_pin <=9999) {
        cout << "\nError pin";
    }
    else {
        pin = new_pin;
    }
}

unsigned long Card::getNum()
{
    return number;
}

const char* Card::getName()
{
    return name;
}

const char* Card::getExpDate()
{
    return expiredDate;
}

int Card::getPin()
{
    return pin;
}

float Card::getCash()
{
    return cash;
}

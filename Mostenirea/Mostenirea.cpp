// Mostenirea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
class Vehicul
{
public:
    std::string marca;
    void porneste()
    {
        std::cout << "Vehiculul a pornit " << std::endl;
    }
};

//class Derivata: tip_mostenire clasa_de_baza
class Automobil : public Vehicul
{
public:
    void claxoneaza()
    {
        std::cout << "Beep Beep! " << std::endl;
    }
};


int main()
{
    Automobil bmw;
    bmw.marca = "Bmw";//atribut din clasa vehicul
    bmw.porneste();//metoda din clasa vehicul
    bmw.claxoneaza();//metoda din clasa automobil
   // in int main am facut o marca care sa claxoneze si sa porneasca
}
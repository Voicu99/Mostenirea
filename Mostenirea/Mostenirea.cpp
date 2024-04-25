// Mostenirea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
class Vehicul
{
public:
    Vehicul(int nr_roti) : numar_roti(nr_roti)
    {
        std::cout << "Un vehicula fost creat\n";
    }
    ~Vehicul()
    {
        std::cout << "Un vechiul a fost distrus\n";
    }
    std::string marca;
    void porneste()
    {
        std::cout << "Vehiculul a pornit " << std::endl;
    }
private:
    int numar_roti;
   
protected:
    int getNumarRoti()
    {
        return numar_roti;
    }
};

//class Derivata: tip_mostenire clasa_de_baza
class Automobil : public Vehicul
{
public:
    Automobil() : Vehicul(4)
    {
        std::cout << "Un automobil a fost creat\n";
  
    }
    ~Automobil()
    {
        std::cout << "Un automobil a fost distrus\n";
    }
    void claxoneaza()
    {
        std::cout << "Beep Beep! " << std::endl;
    }
    void printNumarRoti()
    {
        std::cout << "Numarul de roti este " << getNumarRoti() << std::endl;
    }
};
class Motocicleta : public Vehicul
{
public:
    Motocicleta() : Vehicul(2)
    {
        std::cout << "O mototcicleta a fost creata\n";
    };
    void lineSpliting()
    {
        std::cout << "Line Spliting\n";
    }
};

class A
{
public: A() {
    std::cout << "Construcor A\n";
};
      ~A() {
          std::cout << "Destructor A\n";
      };
};

class B : virtual public A
{
public: B() { std::cout << "Construcor B\n"; };
      ~B() {
          std::cout << "Destructor B\n";
      };
};

class C : virtual public A
{
public:
    C() {
        std::cout << "Construcor C\n";
    };
    ~C() {
        std::cout << "Destructor C\n";
    };

};

class D : public B, C
{
public:
    D()
    {
        std::cout << "Construcor D\n";
    };
    ~D()
    {
        std::cout << "Destructor D\n";
    };

};

int main()
{
    D d;
    Automobil bmw;
    bmw.marca = "Bmw";//atribut din clasa vehicul
   bmw.porneste();//metoda din clasa vehicul
    bmw.claxoneaza();//metoda din clasa automobil
    bmw.printNumarRoti();
    Motocicleta Bmw;
    Bmw.marca = "Bmw";
    Bmw.lineSpliting();

    //bmw.numar_roti // error este protected
    //Vehicul v;
    //v.numar_roti // error este protected

   // in int main am facut o marca care sa claxoneze si sa porneasca
}
#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
        string nomi;
        int speed;
        int yil;
        Car(string nomi,int speed,int yil){
            this->nomi = nomi;
            this->speed = speed;
            this->yil = yil;
        };
        void AllCar(){
            cout << "Nomi: " + nomi + "; Speed: " + to_string(speed) + "; Yil: " + to_string(yil) <<endl;
        };
};
class MyCar : public Car{
    public:
        string egasi;

        MyCar(string nomi,string egasi,int speed,int yil):Car(nomi,speed,yil){
            this->egasi = egasi;
        };
        
        string All(){
            return  "Nomi: " + nomi + "; Egasi: " + egasi+ "; Speed: " + to_string(speed) + "; Yil: " + to_string(yil);
        };
};
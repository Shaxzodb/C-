//#include <iostream>
//#include <string>
#include "main.hpp"
#include <conio.h>
//using namespace std;

void Cars(){
    Car car=*new Car("BMW",300,5);
    car.AllCar();
    MyCar *mycar=new MyCar("BMW","Shaxzod",340,4);
    cout << mycar->All() << endl;
    Car car1("Nexia",67,5);
}

int main(){
    Cars();
    //system("main>0");
    getch();
    return 0;
};

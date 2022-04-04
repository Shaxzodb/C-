//#include <iostream>
//#include <string>
#include "main.hpp"
//using namespace std;

void Cars(){
    Car car=*new Car("BMW",300,5);
    car.AllCar();
    MyCar *mycar=new MyCar("BMW","Shaxzod",340,4);
    cout << mycar -> All() << endl;
}

int main(){
    Cars();
    return 0;
}
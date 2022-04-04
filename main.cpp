//#include <iostream>
//#include <string>
#include "main.hpp"
//using namespace std;



int main(){
    Car car("BMW",300,5);
    car.AllCar();
    MyCar *mycar=new MyCar("BMW","Shaxzod",340,4);
    cout << mycar -> All() << endl;
    return 0;
}
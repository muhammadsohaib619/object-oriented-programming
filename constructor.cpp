#include<iostream>
using namespace std;

class Car {
private:
    string model;
    string name, company;
public:
    Car(string name, string model, string company){
        this->name = name;
        this->model = model;
        this->company = company;
    }
};

int main() {

    // consturctor initialized all attributes of the class
    Car c1("corolla", "c26", "toyota");


return 0;
}
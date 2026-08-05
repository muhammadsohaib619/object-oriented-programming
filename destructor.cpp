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
    ~Car(){}
};

int main() {

    // desturctor deallocate all memory used by the variables and functions it delets when their usage is done all attributes of the class 
    // constructor -> initialized
    // destructor -> deletes or deallcate memory if dynamic variables or arrays are made
    Car c1("corolla", "c26", "toyota");


return 0;
}
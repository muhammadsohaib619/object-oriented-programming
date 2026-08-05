#include<iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person() { }
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
};



int main() {

    Person p1;
    //added getter and setters functions we keep attribute private and allow limited access through getters and setters funtion
    p1.setName("sohaib");
    p1.getName();


return 0;
}
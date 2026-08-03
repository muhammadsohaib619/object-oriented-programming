#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    
};



int main() {

    cout << "hello world"<<endl;  
    cout << "we will learn classes and objects"<<endl;  
    Person p1;
    p1.name = "sohaib";
    p1.age = 21;
    cout << "name: "<< p1.name << endl;
    cout << "age: "<< p1.age << endl;

return 0;
}
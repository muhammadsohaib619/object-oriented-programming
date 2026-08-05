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
    void setAge(int age){
        this->age = age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void getInfo(){
        cout<<"---------Person Info-----------"<<endl;
        cout<<"name: "<< name <<endl;
        cout<<"age: "<< age <<endl;        
    }
};



int main() {

    Person p1;
    //added getter and setters functions we keep attribute private and allow limited access through getters and setters funtion
    p1.setName("sohaib");
    p1.getName();
    p1.setAge(21);
    p1.getInfo();

return 0;
}
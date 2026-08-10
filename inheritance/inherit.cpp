#include<iostream>
using namespace std;

class person{
protected:
    string name;
    int age;
public:
    person() { }
    person(string name, int age){
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

class student : public person {
private:
    string stuId;
    double gpa;
public:

};

int main() {



return 0;
}
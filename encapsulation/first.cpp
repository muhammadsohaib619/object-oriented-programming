#include<iostream>
using namespace std;

//encapsulation is wrapping the data, members and methods into class..
//its just like its name it means to encapsulate logic in a capsule or a container in which this case is class 

class Animal {
private:
    string animalName;
public:
    void eat(){
        cout<<"animal is eating..."<<endl;
    }
    void speak(){
        cout<<"animal speak..."<<endl;
    }
};

int main() {

    Animal dog;
    dog.speak();

return 0;
}
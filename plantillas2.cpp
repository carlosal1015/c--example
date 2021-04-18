//
// Created by carlosal1015 on 4/17/21.
//
#include <iostream>

class MyClass {
protected:
    int age;
public:
    void sayAge(){
        this->age = 20;
        std::cout << age;
    }
};

class MyNewClass : public MyClass {

};

int main() {

    MyNewClass *a = new MyNewClass();
    a->sayAge();

    return 0;

}
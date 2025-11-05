#include<iostream>
using namespace std;

class A {
    static int a; // Static member variable
    public:
    int get(){
        return a;
    }
    friend class B;
};

int A::a = 10; // Defining static member variable

class B{
    int b;
    public:
    B(int y): b(y){}
    void print(){
        A::a = 10; // modifies static variable 'a' in class A
        cout<< A::a - b << " "<< A::a+b;
    }
};

int main(){
    B b(1);
    b.print();
    
}
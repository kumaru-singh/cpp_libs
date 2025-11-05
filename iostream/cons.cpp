#include<iostream>
using namespace std;

namespace name {
    class Student{
        int roll;
        public:
        Student(int x) : roll(x) {} // Constructor
        void print(){
            cout<<"Roll: "<<roll<<endl;
        }
    };
}

int main(){
    name::Student s(101);
    s.print();
    return 0;
}
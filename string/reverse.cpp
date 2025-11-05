#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    string s = "Hello, World!";
    reverse(s.begin(), s.end());
    cout << s << endl; // !dlroW ,olleH
    return 0;
}
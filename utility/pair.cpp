#include<iostream>
#include<algorithm>
#include<utility>
#include<string>
using namespace std;

int main(){
    pair<int, string> p = { 1, "hello"};
    cout << p.first << " " << p.second << endl; // 1 hello
    return 0;
}
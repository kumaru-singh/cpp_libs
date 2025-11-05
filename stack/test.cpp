#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(10);
    s.push(30);
    s.push(20);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
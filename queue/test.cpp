#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(1);
    q.push(10);
    q.push(30);
    q.push(20);

    while(!q.empty()){
        cout << q.front() << " ";
        cout << q.back() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
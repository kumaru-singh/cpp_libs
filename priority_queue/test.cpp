#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
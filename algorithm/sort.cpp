#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 5, 3, 2, 4};
    sort(v.begin(), v.end()); // sort in ascending order
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;

    
}
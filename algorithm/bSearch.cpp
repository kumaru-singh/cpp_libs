#include<algorithm>
#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 5, 3, 2, 4};
    int key = 3;
    sort(v.begin(), v.end());

    if(binary_search(v.begin(), v.end(), key)){
        cout << "Element found" << endl;
    }else{
        cout << "Element not found" << endl;
    }
    return 0;
}
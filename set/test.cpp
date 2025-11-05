#include<iostream>
#include<algorithm>
#include<set>
#include<array>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(10);
    s.insert(30);
    s.insert(20);

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    array<int,5> a = {1, 5, 3, 2, 4};
    int minValue = *min_element(a.begin(), a.end());
    int maxValue = *max_element(a.begin(), a.end());
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;
    return 0;
}


#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    array<int,5> a = {1, 5, 3, 2, 4};
    int minValue = *min_element(a.begin(), a.end());
    int maxValue = *max_element(a.begin(), a.end());
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;
    return 0;
}
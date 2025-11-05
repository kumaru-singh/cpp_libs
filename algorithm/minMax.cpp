#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1, 5, 3, 2, 4};
    int minValue = *min_element(v.begin(), v.end());
    int maxValue = *max_element(v.begin(), v.end());
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;

    int a = 15, b = 47, c = 32;
    cout << "Min: " << std::min({a, b, c}) << endl;
    cout << "Max: " << std::max({a, b, c}) << endl;
    return 0;
}
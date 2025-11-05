#include<iostream>
#include<algorithm>
#include<map>   
using namespace std;

int main(){
    map<string, int> m;
    m["a"] = 5;
    m["b"] = 10;
    m["c"] = 15;
    m["d"] = 20;
    m["e"] = 25;

    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    map<string, int> m2;
    m2.insert({"f", 30});
    m2["g"] = 35;
    m2["h"] = 40;

    for(auto it = m2.begin(); it != m2.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
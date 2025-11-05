#include<iostream>
#include<algorithm>
#include<tuple>
#include<type_traits>
using namespace std;

int main(){
    using MyTuple = tuple<int, double, string>;
    tuple<int, double, string> t = {1, 3.14, "hello"};

    // Accessing elements
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl; // 1 3.14 hello

    // Tuple size
    cout<<tuple_size<decltype(t)>::value<<endl;

    // Tuple element type
    using FirstType = tuple_element<0, decltype(t)>::type;
    FirstType x = get<0>(t);
    cout<<x<<endl;

    // Get the type of the second element
    using SecondElementType = tuple_element<1, MyTuple>::type;
    SecondElementType y = get<1>(MyTuple{1, 3.14, "hello"});
    cout<<y<<endl;

    if constexpr(is_same_v<SecondElementType, double>){
        cout<<"Second element is double"<<endl;
    }

    return 0;
}
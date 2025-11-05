#include<iostream>
using namespace std;

class Point {
    int x, y;
    public:
    Point( int _x, int _y ) : x(_x), y(_y) {}
    friend Point& operator<<(ostream& os, Point& p);
};

Point& operator<<( ostream& os, Point& p){
    cout<<"("<<p.x<<","<<p.y<<")";
    return p;
}

int main() {
    Point p(1, 2), q(3, 4);
    cout << p ;
    cout << q ;
    return 0;
}
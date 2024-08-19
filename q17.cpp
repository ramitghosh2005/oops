#include<iostream>
using namespace std;
class Rectangle{
    private:
       int l,b;
    public:
       Rectangle(int x,int y){
        l=x;
        b=y;
       }
       int Area(){
        return l*b;
       }
};
int main(){
    Rectangle p1(10,20);
    Rectangle p2(20,30);
    Rectangle p3(30,40);
    Rectangle p4(40,50);
    cout<<p1.Area()<<endl<<p2.Area()<<endl<<p3.Area()<<endl<<p4.Area()<<endl;
    return 0;
}
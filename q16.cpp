#include<iostream>
#include<math.h>
using namespace std;

class points3d{
    private:
      int x,y,z;
    public:
      points3d(){
        x=0;
        y=0;
        z=0;
      }
      points3d(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
      }
      int distance(points3d p3){
        int d=0;
        d=sqrt(pow(x-p3.x,2)+pow(y-p3.y,2)+pow(z-p3.z,2));
        return d;
      }
      void display(){
        cout<<x<<endl<<y<<endl<<z<<endl;
      }
};

      int main(){
        points3d p1;
        points3d p2(10,20,30);
        p1.display();
        p2.display();
        cout<<"distance between 2 points : "<<p1.distance(p2)<<endl;
        return 0;
      }
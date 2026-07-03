#include<iostream>
using namespace std;
int main(){
int x1,y1,x2,y2;
cout<<"Enter x1 y1 =";
cin>>x1>>y1;
cout<<"Enter x2 y2 =";
cin>>x2>>y2;
int dx=x2-x1;
int dy= y2-y1;
int d=2*dy-dx;
int x=x1;
int y=y1;
cout<<"points are="<<endl;
cout<<"("<<x<<","<<y<<")"<<endl;
while(x<x2){
        if(d<0){
            d=d+(2*dy);
            x++;
        }
        else{
            d=d+2*(dy-dx);
            x++;
            y++;
        }
    cout<<"("<<x<<","<<y<<")"<<endl;
}

return 0;
}

















#include <iostream>
#include <string>
#include<math.h>
#include <stdio.h>
// #include "Box.h"
// #include "Pyramid.h"
// #include "Sphere.h"
using namespace std;
double length;
double width;
double height;
double radius;
char yORn;
bool running = true;

class Box{
  private:


  public:

    double volume(double l,double w,double h){
      return l*w*h;
    }
    double surfaceArea(double l,double w,double h){
      return 2*w*l + 2*l*h + 2*h*w;
    }
  };

class Sphere{
  private:
  public:

    double volume(double r){
      return (r*r*r)*3.14159265358979323846*4/3;
  }
  double surfaceArea(double r){
    return (r*r)*3.14159265358979323846*4;
}

};

class Pyramid{
private:

public:

  double volume(double l, double w, double h){
    return (l*w*h)/3;
  }
  double surfaceArea(double l,double w,double h){
    return w*l + l*(sqrt(pow(w/2,2)+pow(h,2)))+ w*(sqrt(pow(l/2,2)+pow(h,2)));
  }
};

void B(){
  Box box1;
  cout<< endl<< "Enter box length: ";
  cin>> length;
  cout<<  "Enter box width: ";
  cin>> width;
  cout<<  "Enter box height: " ;
  cin>> height;

  cout<< endl <<"Box volume: "<< box1.volume(length,width,height)<< endl<<"Box surface area: " << box1.surfaceArea(length,width,height)<< endl<< endl;
}

void P(){
  Pyramid pyramid1;
  cout<< endl<< "Enter pyramid length: ";
  cin>> length;
  cout<<  "Enter pyramid width: ";
  cin>> width;
  cout<<  "Enter pyramid height: " ;
  cin>> height;

  cout<< endl <<"Pyramid volume: "<< pyramid1.volume(length,width,height)<< endl<<"Pyramid surface area: " << pyramid1.surfaceArea(length,width,height)<< endl<< endl;
}

void S(){
  Sphere sphere1;
  cout<< endl<< "Enter sphere radius: ";
  cin>> radius;

  cout<< endl <<"Sphere volume: "<< sphere1.volume(radius)<< endl <<"Sphere surface area: " << sphere1.surfaceArea(radius)<< endl<< endl;
}

int main() {
  while(running){
    cout<<"Do you want to make a box, a pyraid, or a sphere"<< endl<< "Please type b  p  or  s: ";
    cin>> yORn;
    if( yORn=='b'|| yORn == 'B' ){
      B();
    }
    else if( yORn=='p'|| yORn == 'P' ){
      P();
    }
    else if( yORn=='s'|| yORn == 'S' ){
      S();
    }
    yORn = ' ';
    cout<< "Do you want to create another shape?"<< endl<< "Please type Y or N: ";
    cin>> yORn;
    cout<< endl;
    if( yORn=='y'|| yORn == 'Y' ){
      running = true;

    }else{
      running = false;
    }
  }
  return 0;
}

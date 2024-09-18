#include<iostream>
using namespace std;

int main(){
    int x{0};
    int y{1};
    int suma{0};
 while (y<=4000000){
    if (y%2==0){
        suma= suma+y;
    
    }
    int a=x;
    x=y;
    y=a + y;
 }
 cout<< "La suma es  "<<suma;
 }

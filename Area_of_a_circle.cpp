#include<iostream>
#include<cmath>
#include<iomanip>
int main(){
    double r,area;
    std::cin>>r;
    area=3.14*r*r;
    std::cout<<std::fixed<<std::setprecision(2)<<area<<std::endl;
}
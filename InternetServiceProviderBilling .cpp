#include <iostream>
#include <iomanip>

int main() {

char package;
double hours;
double total;

std::cout<<"Select a subscription package (A, B, or C): "<<std::endl;
std::cin >> package;

std::cout<<"Enter the number of hours used: "<<std::endl;
std::cin>>hours;

while (package!='A' && package!='a' &&
    package!='B' && package!='b' &&
    package!='C' && package!='c' ){

    std::cout<< "Error please enter A, B, or C: "<<std::endl;
    std::cin>>package;
}

while (hours<0  hours>744){
    std::cout<< "Error please enter valid hours: "<<std::endl;
    std::cin>>hours;
}

if (package=='A' 
Spoiler
 package=='a') {

    if (hours<=10) {
     total=9.95;

    }else{
         total=2(hours-10);
    }
}

if (package=='B' || package=='b') {

    if (hours<=20) {
     total=9.95;

    }else{
         total=1(hours-20); 
    }
}

if (package=='C' || package=='c'){ 
     total=9.95;}




std::cout<<"Your total ammout due: $"<<total<<" per month"<<std::endl;

return 0;
}


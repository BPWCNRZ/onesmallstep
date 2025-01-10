///Creating a calulcaor to get the length of the hypotenuse of a right triangle

#include <iostream>
#include <cmath>

int main() {
    //a squared + b squared = c squared

    double a;
    double b;
    double c;

    std::cout<<"Hypotenuse Calculator\n"<<"By BPW\n";
    std::cout<<"Enter the length of side a \n";
    std::cin>>a;
    std::cout<<"Enter the length of side b\n";
    std::cin>>b;

    a = sqrt(a);
    b = sqrt(b);

    c = a + b;

    c = sqrt(c);
    
}
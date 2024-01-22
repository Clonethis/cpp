#include <iostream>
#include <stdio.h>

// #include "stdio.h"
// #include <string>
using namespace std;

void print_twice(std::string nice){
    printf("%s\n",nice.c_str());
    printf("%s\n",nice.c_str());
}

void exercise3(){
    print_twice("Three blind mice");
    print_twice("See how they run");
}

void exercise4(){
    // returns recalculation to farenheits

    printf("Give me number of celsius: ");
    float celsius; 
    cin >> celsius;
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n",celsius, 1.8*celsius+32);
}

void exercise5(){
    printf("Give me number of light years: ");
    float light_years;
    cin >> light_years;
    printf("%.2f light years are %.2f astronomical units \n",light_years,light_years*63.240);
    int __nice = 10; 
    int zero = 0;
    printf("THis is undefined variable %d\n",__nice/zero);
    printf("THis is Defined variable %d\n",10/zero);
    cout<<__nice;

}

void exercise6(){
    char alarm = '\a';
    cout << alarm << "Don't do that again!\a\n"; 
    cout << "Ben \"Buggsie\" Hacker\nwas here!\n";
}
int main(){
    // exercise3();
    // exercise5();
    // exercise4();
    exercise6();
    return 0;
}

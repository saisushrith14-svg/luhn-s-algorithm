#include "random_gen.cpp"
#include "check.cpp"

int main(){
    std::cout << "Enter the number of Digits: " ;
    int nd;
    std::cin >> nd;
    long number=1;
    for(int x : gen(nd-1)){
        number = number*10 + x;
    }
    int n = check(number);
    number = number*10 + n;
    std::cout << number << std::endl;
}
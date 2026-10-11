#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
std::vector<int> gen(int nd){
    auto now = std::chrono::system_clock::now();
    int seed = now.time_since_epoch().count();
    int a = 17;
    int c = 5;
    long m = 4294967296;

    std::vector<int> Arr(nd); 
    Arr[0]=seed;
    for(int i=1;i<nd;i++)
    {
        Arr[i] = (a*Arr[i-1]+c)%m;
    }
    for(int i = 0; i < nd ; i++)
    {
        Arr[i]=std::abs(Arr[i]%10);
    }
    return Arr;
}

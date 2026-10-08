#include <iostream>
int main()
{
    std::cout << "Enter the Number: " << std::endl;

    int num;
    std::cin >> num;
    int temp = num;
    int a = 1,s=0;
    while (temp>0)
    {
        if (a%2==0){
            s=s+temp%10;
        }
        else{
            if((temp%10)*2>9)
            {
                s = s + (temp%10)*2 -9 ;
            }
            else
            {
                s=s + (temp%10)*2;
            }
        }
        temp = temp / 10;
        a++;
    }
    if (s%10==0){
        std::cout <<"Valid";
        return 1;
    }
    else{
        std::cout <<"Not Valid";
        return 0;
    }
}
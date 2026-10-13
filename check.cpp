#include <iostream>
int check(long num)
{
    long temp = num;
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
        return 0;
    }
    else{
        int n=1;
        while((s+n)%10!=0){
            n++;
        }
        return n;
    }
}
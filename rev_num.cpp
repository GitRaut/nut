#include "middle.h"

int itc_rev_num(long long number)
{
    long long revenbr, revers, len;
    if(number < 0){
        number = number * -1;
    }
    if(number == 0){
        return 1;
    }
    revenbr = 0;
    revers = 0;
    len = 0;
    while (number > 0)
    {
        revers = (number % 10);
        revenbr = revenbr * 10 + revers;
        number = number / 10;
    }
    while(revenbr > 0){
        len++;
        revenbr = revenbr / 10;
    }
    return len;
}

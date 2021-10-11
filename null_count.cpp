#include "middle.h"

int itc_null_count(long long number)
{
    int result;
    result = 0;
    while(number > 0){
        if(number % 10 == 0){
            result++;
        }
        number = number / 10;
    }
    return result;
}

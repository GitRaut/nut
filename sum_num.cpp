#include "middle.h"

int itc_sum_num(long long number){
    int sum = 0, point;
    if(number < 0){
        number = number * -1;
    }
    while(number > 0){
        point = number % 10;
        number = number / 10;
        sum = sum + point;
    }
    return sum;
}

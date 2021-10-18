#include "middle.h"

int itc_second_max_num(long long number){
    int max = 0, point, second_max, len = 0;
    if(number < 0){
        number = number * -1;
    }
    if(number == 0){
        return -1;
    }
    while(number > 0){
        point = number % 10;
        number = number / 10;
        if(point >= max){
            second_max = max;
            max = point;
        }
        if(second_max < point and point < max){
            second_max = point;
        }
    }
    if(len == 1){
        return -1;
    }
    if(second_max == 0){
        return 0;
    }
    if(second_max == max){
        return max;
    }
    return second_max;
}

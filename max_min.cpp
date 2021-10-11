#include "middle.h"

int itc_max_num(long long number){
    int max = 0, point;
    if(number < 0){
        number = number * -1;
    }
    while(number > 0){
        point = number % 10;
        number = number / 10;
        if(point > max){
            max = point;
        }
    }
    return max;
}

int itc_min_num(long long number){
    int min = 9, point;
    if(number < 0){
        number = number * -1;
    }
    while(number > 0){
        point = number % 10;
        number = number / 10;
        if(point < min){
            min = point;
        }
    }
    return min;
}

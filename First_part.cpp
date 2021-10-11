#include "middle.h"

void itc_num_print(int number){
    cout << number;
}

long long itc_multi_num(long long number){
    long long result = 1, point;
    if(number < 0){
        number = number * -1;
    }
    while(number > 0){
        point = number % 10;
        number = number / 10;
        result = result * point;
    }
    return result;
}
















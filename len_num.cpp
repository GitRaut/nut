#include "middle.h"

int itc_len_num(long long number){
    int col_razr = 0;
    if(number < 0){
        number = number * -1;
    }
    if(number == 0){
        return 1;
    }
    while(number > 0){
        number = number / 10;
        col_razr = col_razr + 1;
    }
    return col_razr;
}

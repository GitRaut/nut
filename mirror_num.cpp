#include "middle.h"

bool itc_mirror_num(long long number){
    int num, rev = 0, reven = 0;
    num = number;
    while(num > 0){
        rev = num % 10;
        reven = reven * 10 + rev;
        num = num / 10;
    }
    if(number == reven){
        return true;
    } else {
        return false;
    }
}

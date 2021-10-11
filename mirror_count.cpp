#include "middle.h"

int itc_mirror_count(long long number){
    int res = 0;
    for(int i = 1; i <= number; i++){
        res = res + itc_mirror_num(i);
    }
    return res;
}

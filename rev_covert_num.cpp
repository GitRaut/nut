#include "middle.h"

int itc_rev_covert_num(long long number, int ss){
    int chislo = 0, cif, step = 0;
    while(number > 0){
        cif = (number % 10) * itc_pow(ss, step);
        chislo = chislo + cif;
        number = number / 10;
        step++;
    }
    return chislo;
}

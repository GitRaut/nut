#include "middle.h"

int itc_rev_bin_num(long long number){
    int chislo = 0, cif, step = 0, num = 2;
    while(number > 0){
        cif = (number % 10) * itc_pow(num, step);
        chislo = chislo + cif;
        number = number / 10;
        step++;
    }
    return chislo;
}

#include "middle.h"

int itc_covert_num(long long number, int ss){
    int cif;
    long long result = 0, len = 0, chislo = 0;
    while(number > 0){
        cif = number % ss;
        chislo = chislo * 10 + cif;
        number = number / ss;
        len++;
    }
    while(len > 0){
        cif = chislo % 10;
        result = result * 10 + cif;
        chislo = chislo / 10;
        len--;
    }
    return result;
}

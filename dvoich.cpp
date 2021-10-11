#include "middle.h"

long long itc_bin_num(long long number){
    int chislo, cif, len = 0, result;
    while(number > 0){
        cif = number % 2;
        chislo = chislo * 10 + cif;
        number = number / 2;
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

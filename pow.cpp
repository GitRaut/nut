#include "middle.h"

double itc_pow(int num, int step)
{
    int result = 1;
    long long chislo = num;
    int iterationsCount = step;
    if(iterationsCount < 0){
        iterationsCount = iterationsCount * -1;
    }
    while (result < iterationsCount)
    {
        num = num * chislo;
        result = result + 1;
    }
    if (step > 0){
        return num;
    }
    if(step < 0){
        return 1.00 / num;
    }
    if(step == 0){
        return 1;
    }
    return 0;
}

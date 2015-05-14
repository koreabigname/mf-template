#include <stdio.h>
#include "kbbatch.h"

int main(void)
{
    int retCd;

    retCd = doPreProcess();
    printf("ReturnCode = %d\n", retCd);

    printf("MainProcess running\n");

    retCd = doPostProcess();
    printf("ReturnCode = %d\n", retCd);

    return 0;
}

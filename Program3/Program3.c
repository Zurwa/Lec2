#include <stdio.h>
#include <math.h>
#include <errno.h>

int main(void)
{
    asin(10.0);

    if (errno == EDOM)
        perror("Program Error Test");
        
    return 0;
}
//Makes nonuniform List for x size. Run with > fileName

#include <stdio.h>
main()
{

double start = 126.9;
double end = 298.0;

double listSize = 168100.0;

double steps = (end - start) / listSize;

double output = start;

        for (int i=0; i<listSize; i++) {
                output = output + steps;
                printf("%f", output);
                printf("\n");
        }
}

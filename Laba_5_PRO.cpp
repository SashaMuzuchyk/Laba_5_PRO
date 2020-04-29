#include <stdio.h>
#include <omp.h>
int main(int argc, char *argv[])
{
 omp_set_num_threads(2);
#pragma omp parallel num_threads(3)
 {
 printf("Paralel'na diljanka 1\n");
 }
#pragma omp parallel
 {
 printf("Paralel'na diljanka 2\n");
 }
} 
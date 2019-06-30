#include <stdio.h>
 
int main() {
  #pragma omp parallel
  {
    printf("asdasda\n");     
  }
  return 0;
}
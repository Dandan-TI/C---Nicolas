#include <stdio.h>

int x = 10;
int *p = &x;
int main(){
printf("Valor de x: %d\n", *p); // Acessa o valor de x através do ponteiro
return 0;
}

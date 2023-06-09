#include <stdio.h>

int main() {
long int a, hasil;
hasil=0;
scanf("%ld", &a);
long b[a];
for (long i = 0; i < a; i++)
{
    scanf("%ld", &b[i]);
    hasil=hasil+b[i];
}

printf("%ld", hasil);

return 0;
}

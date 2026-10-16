#include <stdio.h>
void f(void);
int i;

int main(void)
{
    for (i=0; i<5; i++)
        f();
}

void f(void)
{
    for (i=0; i<10; i++)
        printf("#");
}

#include <stdio.h>
int valor(int *x)
{
    if((*x)%2==0)
    {
        printf("Es par");
    }else
        {
            printf("Es impar");
        }
}

int main()
{
    int a,b;
    printf("Ingresar valor:\n");
    scanf("%d",&a);
    valor(&a);
    return 0;
}
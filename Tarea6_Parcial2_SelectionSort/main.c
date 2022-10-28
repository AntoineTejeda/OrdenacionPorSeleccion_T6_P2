#include <stdio.h>
#include <stdlib.h>
#define N 10
void Seleccion(int A[N]);
void ImprimeArregloOrdenado(int A[N]);

int main()
{
    int A[N]={10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
    Seleccion(A);
    ImprimeArregloOrdenado(A);
}

void Seleccion(int A[N])
{
    int i,j,temp;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}
void ImprimeArregloOrdenado(int A[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d,",A[i]);
    }
}

#include<stdio.h>
#include<stdio.h>

void printArray(int* A, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int *A,int n)
{
     int indexofMin, temp ;
     for(int i=0;i<n-1;i++)
     {
    indexofMin=i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]< A[indexofMin])
        {
         indexofMin = j;
        } 
    }
    temp =A[i];
    A[i]=A[indexofMin];
    A[indexofMin]=temp;
}

}
    
int main()
{
    int A[]={12,54,65,7,23,9};
    int n=6;
    //printing beofre sorting
    printf("Before insertionSorting\n");
    printArray(A,n);
    printf("After insertionSorting\n");

    selectionSort(A,n);
    
    printArray(A,n);
    return 0;
}

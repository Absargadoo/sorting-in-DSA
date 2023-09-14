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
int partition(int A[],int low,int high)
{
     int pivot=A[low];
     int i=low+1;
     int j=high;
     int temp;
     do
{
     while(A[i]<=pivot)
     {
        i++;
     }
     while(A[j]>pivot)
     {
        j--;
     }
     if(i<j)
     {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
     }
}
while(i<j);
//swap
temp=A[low];
A[low]=A[j];
A[j]=temp;
return j ;

}
void Quicksort (int A[], int low, int high)
{
     int partitionindex;

     if(low<high)
     {
     partitionindex= partition(A,low, high);
     Quicksort(A, low, partitionindex-1); //sort left subarray
     Quicksort(A, partitionindex + 1, high); //sort right subarray
}
}
    
int main()
{
    int A[]={12,54,65,7,23,9};
    int n=6;
    //printing beofre sorting
    printf("Before quickSorting\n");
    printArray(A,n);
    printf("After quickSorting\n");

    Quicksort(A,0,n-1);
    
    printArray(A,n);
    return 0;
}

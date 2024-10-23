#include<stdio.h>
#include<conio.h>
void selection(int arr[],int n)
{
        int i,j,small;
        for(i=0;i<n-1;i++)
        {
                small=i;
                for(j=i+1;j<n;j++)
                        if(arr[j]< arr[small])
                                small=j;
                int temp=arr[small];
                arr[small]= arr[i];
                arr[i]=temp;
        }
}
void printArr(int a[],int n) {
        int i;
        for(i=0;i<n;i++)
                printf("  %d",a[i]);
}
int main() {
        int a[10],n,i;
        printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-5 & Name:-Selection Sort\n");
        printf("Enter the total number of element \n");
        scanf("%d",&n);
        printf(" Enter the array element \n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Before sorting array elements are- \n");
        printArr(a,n);
        selection(a,n);
        printf(" \n After sorting array elements are- \n");
        printArr(a,n);
        return 0;
}

#include<stdio.h>
#include<conio.h>
void insert(int a[],int n) {
        int i,j,temp;
        for(i=1;i<n;i++)    {
                temp=a[i];
                j=i-1;
                while(j>=0 && temp <=a[j])  {
                        a[j+1]=a[j];
                        j=j-1;
                }
                a[j+1]=temp;
        }
}
void printArr(int a[],int n) {
        int i;
        for(i=0;i<n;i++)
                printf("  %d ",a[i]);
}
int main() {
        int a[10],n,i;
         printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-4 & Name:-Insertion Sort\n");
        printf("Enter the total number of element \n");
        scanf("%d",&n);
        printf(" Enter the array element \n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
         printf("Before sorting array element are -\n");
        printArr(a,n);
        insert(a,n);
        printf("\n After sorting array element are -\n");
        printArr(a,n);
        return 0;
}


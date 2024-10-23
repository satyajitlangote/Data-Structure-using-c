#include<stdio.h>
#include<conio.h>
void merge(int a[],int beg,int mid,int end) {
        int i,j,k;
        int n1=mid-beg+1;
        int n2=end-mid;
        int leftArray[n1],rightArray[n2];
        for(int i=0;i<n1;i++)
                leftArray[i]=a[beg+i];
        for(int j=0;j<n2;j++)
                rightArray[j]=a[mid+1+j];
        i=0;
        j=0;
        k=beg;
        while(i<n1 && j<n2) {
                if(leftArray[i] <= rightArray[j]){
                        a[k]=leftArray[i];
                        i++;
                }
                else{
                        a[k]=rightArray[j];
                        j++;
                }
                k++;
        }
        while(i<n1) {
                a[k]=leftArray[i];
                i++;
                k++;
        }
        while(i<n2){
                a[k]=rightArray[j];
                j++;
                k++;
        }
}
void mergesort(int a[], int beg,int end) {
        if(beg<end){
                int mid=(beg+end)/2;
                mergesort(a,beg,mid);
                mergesort(a,mid+1,end);
                merge(a,beg,mid,end);
        }
}
void printArray(int a[],int n) {
        int i;
        for(i=0;i<n;i++)
        {
                printf("  %d",a[i]);
                printf("\n");
        }
}
int main()
{
        int a[50],n,i;
       printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-6 & Name:-Merge Sort\n");
        printf("Enter the total number of element \n");
        scanf("%d",&n);
        printf(" Enter the array element\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Before sorting array elements are-\n ");
        printArray(a,n);
        mergesort(a,0,n-1);
        printf("After sorting  array elements are- \n");
         printArray(a,n);
        return 0;
}

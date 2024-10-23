#include<stdio.h>
#include<conio.h>
void print (int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
}
void bubble (int a[], int n) {
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main () {
    int i, j,temp;
    int a[5] = { 10, 35, 32, 13, 26};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-3 & Name:-Bubble Sort\n");
        printf("Enter number of element \n");
        scanf("%ld",&n);
        printf(" Enter the array element \n");
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
    printf("Before sorting array elements are - \n");
    print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    print(a, n);
}

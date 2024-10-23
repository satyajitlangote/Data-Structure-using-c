#include<stdio.h>
#include<conio.h>
int binarysearch(int a[], int beg,int end,int val) {
	int mid;
	if(end >= beg) {
		mid=(beg + end)/2;
		if(a[mid]==val) {
			return mid+1;
		}
		else if(a[mid]< val) {
			return binarysearch(a,mid+1,end,val);
		}
		else {
			return binarysearch(a,beg,mid-1,val);
		}
	}
	return -1;
}
int main() {
	int a[50],n,i;
	int val;
	int res= binarysearch(a,0,n-1,val);
	 printf("Name:-Satyajit Hanmant Langote\n Class:-BCA-II SEM-III\n Roll_No:-33\nSubject: Lab Course VI based on CC303(Data Structure using C)\nAssignment No:-2 & Name:-Binary Search\n");
	printf("Enter the total number of element \n");
	scanf("%d",&n);
	printf(" Enter the array element \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The element  of the array are -\n");
	for(int i=0;i<n;i++)
		printf("  %d",a[i]);
	printf("\n Element to be searched is -%d");
	scanf("%d",&val);
	if(res==-1)
		printf("\n Element is not present in the array");
	else 
		printf("\n Element is present at %d position of array",res);
	return 0;
}

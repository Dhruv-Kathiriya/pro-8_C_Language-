/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
enter any number :- 3

output:-
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2
enter array element :- 2


8  8  8
8  8  8
8  8  8

*/

#include<stdio.h>

void main(){
	
	int a[5][5];
	int *ptr,i,j,n;
	
	
	printf("enter any number :- ");
	scanf("%d",&n);
	

		ptr = &a;	


	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter array element :- ");
				scanf("%d",&a[i][j]);
	}
}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d  ",(*(ptr+a[i][j]))*(*(ptr+a[i][j]))*(*(ptr+a[i][j])),(ptr+a[i][j]));
		}
		printf("\n");
	}
	
}

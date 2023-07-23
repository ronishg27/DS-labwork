#include <stdio.h>
int OR(int a, int b){
	return(a==1||b==1);

}
int main()
{
	int i,j,m,n;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter the order for matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter matrix A:");
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		scanf("%d", &A[i][j]);
		}
	}
	printf("Enter matrix B:");
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		scanf("%d", &B[i][j]);
		}
	}
	    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		C[i][j]=OR(A[i][j],B[i][j]);
		}
	}
	printf("Join of matrices A and B:");
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

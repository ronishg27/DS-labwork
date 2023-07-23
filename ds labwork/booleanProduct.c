#include <stdio.h>
int OR(int a, int b){
	return(a==1||b==1);

}
int AND(int a, int b){
	return(a==1&&b==1);

}
int main()
{
	int i,j,k,m1,n1,m2,n2,sum;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter the order for matrix A:");
    scanf("%d%d",&m1,&n1);
    printf("Enter the order for matrix B:");
    scanf("%d%d",&m2,&n2);
    if(n1!=m2){
        printf("invalid matrices for multiplication");
        return 1;
    }
    printf("Enter matrix A:");
    for(i=0;i<m1;i++){
    	for(j=0;j<n1;j++){
    		scanf("%d", &A[i][j]);
		}
	}
	printf("Enter matrix B:");
    for(i=0;i<m2;i++){
    	for(j=0;j<n2;j++){
    		scanf("%d", &B[i][j]);
		}
	}
   for(i=0;i<m1;i++){
    	for(j=0;j<n2;j++){
    		sum=0;
            for ( k= 0; k < n1; k++)
            {
                sum=OR(sum,AND(A[i][k],B[k][j]));
            }
            C[i][j]=sum;
		}
   }
   	printf("Product of matrices A and B:");
        for(i=0;i<m1;i++){
    	for(j=0;j<n2;j++){
    		printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
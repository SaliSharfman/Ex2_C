#include<stdio.h>
#include<math.h>
#include "my_mat.h"

#define MAXROW      10
#define MAXCOL      10


void scanMatrix(int matrix[10][10]){
    int i,j;
    for(i=0;i< 10;i++)
    {
        for(j=0;j< 10;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}
int shortestPath2V(int matrix[10][10],int v1,int v2){
    if(v1==v2){
       return -1;
    }
    for(int k = 0; k<10; k++){
        for (int i = 0; i<10; i++){
            for (int j = 0; j<10; j++){
                if(matrix[i][k]!=0&&matrix[k][j]!=0)
                {
                     if(matrix[i][j] > matrix[i][k]+matrix[k][j]||matrix[i][j]==0){
                        matrix[i][j] = matrix[i][k] + matrix[k][j]; 
                        matrix[j][i] = matrix[i][j];
                        }
                     
                }
            }
        }
    }
    if (matrix[v1][v2] == 0){
        return -1;
        }
    return matrix[v1][v2];
}
int isExistsPath(int matrix[10][10]){
    int v1,v2;
    scanf("%d", &v1);
    scanf("%d", &v2);
    int path=shortestPath2V(matrix,v1,v2);
    if (path==-1)
    {
        printf("False \n");
        return 0;
    }
    printf("True \n");
        return 1;
    
}
int shortestPath(int matrix[10][10])
{
    int v1,v2;
    scanf("%d", &v1);
    scanf("%d", &v2);
    printf("%d",shortestPath2V(matrix,v1,v2));
    printf("\n");
    return shortestPath2V(matrix,v1,v2);
}

#include <stdio.h>
#include "my_mat.h"
 
#define MAXROW      10
#define MAXCOL      10
 
int main()
{
    int matrix[10][10];
    char ch;
    scanf("%c", &ch);
    while (ch!='D')
    {
        switch (ch)
        {
        case 'A':
            scanMatrix(matrix);
            break;
        case 'B':isExistsPath(matrix);
            break;
        case 'C':shortestPath(matrix);
            break;
        }
        scanf("%c", &ch);
    }
    
    return 0;   
}

/* 用二维数组实现矩阵的转置 */
#include <stdio.h>
#define ROW 3 /* 矩阵的行数 */
#define COL 4 /* 矩阵的列数 */
int main()
{
     int matrixA[ROW][COL],matrixB[COL][ROW];/* 矩阵的定义 */
    int i,j;
    system("cls");/* 清屏 */
    printf("Enter elements of the matrixA,"); /* 提示信息 */
    printf("%d*%d:\n",ROW,COL);
    for( i=0; i<ROW; i++ )
    {
        for( j=0; j<COL; j++ )
        {
            scanf("%d",&matrixA[i][j]); /* 输入矩阵 A 的值 */
        }
    }
    for( i=0; i<ROW; i++ )
    {
        for( j=0; j<COL; j++ )
        {
            matrixB[j][i] = matrixA[i][j]; /* 转置 */
        }
    }
    printf("MatrixB,"); /* 输出矩阵 B */
    printf("%d*%d:\n",COL,ROW);
    for( i=0; i<COL; i++ )
    {
        for( j=0; j<ROW; j++ )
        {
            printf("%8d",matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n Press Any Key to Quit... \n");
    getch();

 return 0;
}

#include<stdio.h>
#define RW 3
#define CL 4
//程序题最后一题遍历数组
int fun(int a[][CL])
{
    int i;
    min=a[0][0];
    for(i=0;i<RW;i++)
        for(j=0;j<CL;j++)
        {
          if(a[i][j]<min)
          min=a[i][j];
        }
    return min;

}
int main()
{
    int arr[RW][CL]={{18,21,78,5},{11,16,43,25},{28,21,14,15}};
    int i,j;
    for(i=0;i<RW;i++)
      for(j=0;j<CL;j++)
        printf("%6d\n",arr[i][j]);
    printf("最小%6d",fun(arr));
    getch();
    return 0;

}



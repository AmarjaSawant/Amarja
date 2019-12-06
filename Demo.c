#include<stdio.h>
int main() {
  int nrows=3,ncols=5;
  int marr[][];
  
  for(int i=0;i<nrows;i++)
  for(int j=0;j<ncols;j++)
    marr[i][j]=101+i*100+j*10;
    
  int row_wise_sum[3]={},total=0;
  for(int i=0;i<nrows;i++)
  {
    for(int j=0;j<ncols;j++)
    {
      printf("%5d",marr[i][j]); 
      row_wise_sum[i]+=marr[i][j];
    }
    total+=row_wise_sum[i];
    printf("\n");
  }
  print ("row_wise_sum[i]=%d, total sum=%d",row_wise_sum[i],total sum);
  return 0;
}

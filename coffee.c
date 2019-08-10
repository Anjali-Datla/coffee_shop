#include<stdio.h>
int main()
{
  int N,P,S=0,amount=0;
  scanf("%d %d",&N,&P);
  amount=N;
  while(S!=0)
  {

    S+=(N*P)/100;
    N=N-S;
    amount+=S;
  }
  printf("%d",amount);
}

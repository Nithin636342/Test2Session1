#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter the value: ");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int i,count=0;
  for(i=1; i<=n; i++)
  {
    if(n%i==0)
    count += 1;
  }
  return count;
}
void output(int n,int is_prime)
{
  int z;
  if(is_prime==2)
  printf("%d is a prime number",n);
  else
  printf("%d is not a prime number",n);
}
int main()
{
  int n,y;
  n=input_number();
  y=is_prime(n);
  output(n,y);
  return 0;
}
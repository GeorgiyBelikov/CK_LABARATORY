#include <stdio.h>
#include <math.h>
int main()
{
  float m,n,z1,z2,a,b,c,d;
  system("chcp 1251");
  system("cls");
  printf("������� ��� �����\n");
  scanf("%f", &m);
  scanf("%f", &n);
  a=(m-1)*sqrt(m)-(n-1)*sqrt(n);
  b=sqrt(pow(m,3)*n)+n*m+pow(m,2)-m;
  c=sqrt(m)-sqrt(n);
  if(b!=0)
  {
    z1=a/b;
    printf("�������� ������� ��������� %f\n", z1);
  }
  else
  {
    printf("�������� ������� ��������� �� ����������\n");
  }
  if(m!=0)
  {
    z2=c/m;
    printf("�������� ������� ��������� %f\n", z2);
  }
  else
  {
    printf("�������� ������� ��������� �� ����������");
  }
  return 0;
}

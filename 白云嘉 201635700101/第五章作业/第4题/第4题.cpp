#include <stdio.h>
int main()
{
char c;
int letters=0,space=0,digit=0,other=0;
printf("������һ���ַ�:\n");
while((c=getchar())!='\n')
{
 if (65<=c && c<=90 || 97<=c && c<=122)
 {
  ++letters;
 }
 else if (32==c)
 {
  ++space;
 }
else if (48<=c && c<=57)
 {
  ++digit;
 }
else
 {
  ++other;
 }
}
printf("��ĸ��:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n",letters,space,digit,other);
return 0;
}

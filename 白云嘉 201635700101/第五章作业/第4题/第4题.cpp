#include <stdio.h>
int main()
{
char c;
int letters=0,space=0,digit=0,other=0;
printf("请输入一行字符:\n");
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
printf("字母数:%d\n空格数:%d\n数字数:%d\n其它字符数:%d\n",letters,space,digit,other);
return 0;
}

#include<stdio.h>

#include<string.h>
void main()
{
char str[20]=" ";
char rstr[20]=" ";
char str2[20]=" ";
char substr[10]=" ";
int i,j,n,len,flag,flag1,len1,flag2,count;
flag2=0;

printf("\nEnter String:");
scanf("%s",str);
printf("\nDisplay String:%s",str);
//1.Calculate length of String
len=strlen(str);
printf("\nLength of String %s is:%d",str,len);
//2.String reversal
for(i=len-1,j=0;i>=0;i--,j++)
{
rstr[j]=str[i];
}
printf("\nReverse of string %s is: %s",str,rstr);
//3.Equality check of two strings
printf("\nEnter String2:");
scanf("%s",str2);
printf("\nDisplay String:%s",str2);
flag=strcmp(str,str2);
if(flag==0)
printf("\nString %s and String %s are Equal",str,str2);
else
printf("\nString %s and String %s are not Equal",str,str2);
//4.Check Pallindrome
flag1=strcmp(str,rstr);
if(flag1==0)
printf("\nString %s is Pallindrome",str);
else
printf("\nString %s is not Pallindrome",str);
//5.Check Substring
printf("\nEnter SubString:");
scanf("%s",substr);
len1=strlen(substr);
for(i=0;i<len;)
{
j=0;
count=0;
while(str[i]==substr[j] && substr[j]!='\0')
{
count++;
i++;
j++;
}
if(count==len1)
{
flag2=1;
break;
}
else
i++;
}
if (flag2==1)
printf("\nSubstring is present");
else
printf("\nSubstring not present");

}

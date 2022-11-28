#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
 int a=0,b=0,c[200]={0},max,add,same[10],x=0;
 char arr[200][15],ch1,ch2;
 while((ch1=getchar())!=EOF)
 {
  if(ch1>='a'&&ch1<='z')
  arr[a][b++]=ch1;
  else if(ch1>='A'&&ch1<='Z')
  arr[a][b++]=ch1-'A'+'a';
  else if(ch1==' '&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
  else if(ch1=='.'&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
  else if(ch1=='!'&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
  else if(ch1=='?'&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
  else if(ch1==','&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
  else if(ch1=='\n'&&b!=0)
  {
  	arr[a++][b]='\0';
  	b=0;
  }
 }
 for(int i=0;i<a-1;i++)
 {
  for(int j=i+1;j<a;j++)
  {
   if((strcmp(arr[i],arr[j]))==0)
   c[i]++;
  }
 }
 for(int i=0;i<a;i++)
 printf("%s %d\n",arr[i],c[i]+1);
 max=c[0];
 add=0;
 for(int i=1;i<a-1;i++)
 {
  if(max<c[i])
  {
   max=c[i];
   add=i;
  }
 }
 for(int i=0;i<a;i++)
 {
  if(max==c[i])
  {
   if(strcmp(arr[add],arr[i])<0)
   strcpy(arr[add],arr[i]);
  }
 }
 printf("出现最多次的单词：%s\n出现次数:%d",arr[add],max+1);
 return 0;
}

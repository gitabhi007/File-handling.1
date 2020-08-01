/*write a program to print the content of file in reverse*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  int i,n;
  fp=fopen("Data.txt","r");
  if(fp==NULL)
  {
    printf("\nError:cannot open file");
    exit(1);
  }
  fseek(fp,0,SEEK_END);
  n=ftell(fp);
  i=0;
  while(i<n)
  {
    i++;
    fseek(fp,-i,SEEK_END);
    printf("%c",fgetc(fp));
  }
  fclose(fp);
  return 0;
}

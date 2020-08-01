/*copy contents of a file into another using c program*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *f1,*f2;
  char ch;
  f1=fopen("Data.txt","r");
  f2=fopen("Data1.txt","w");
  if(f1==NULL||f2==NULL)
  {
    printf("\nError:cannot open file");
    exit(0);
  }
   while(1)
  {
    ch=fgetc(f1);
    if(ch==EOF)//end of file
    break;
    fputc(ch,f2);
  }
  fclose(f1);
  fclose(f2);
  return 0;
}
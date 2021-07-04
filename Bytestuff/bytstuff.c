#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sender();
void receiver(char *message,int l2);
int main(void)
{
	sender();
}
void sender()
{
        int l;
	char msg[50];
	char st[50];
        char res[50];
	printf("Enter the message\n");
	scanf("%s",msg);
        l=strlen(msg)+1;
	sprintf(st,"%d",l);
        strcat(st,msg);
        printf("Frame is %s : ",st);
        //printf("%s",st);
        receiver(st,l);
}
void receiver(char *res,int l2)
{
  if(l2==strlen(res))
{
  printf("\nReciever side msg is : ");
  for(int i=1;i<l2;i++)
{
  printf("%c",res[i]);
}
}
printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_whitespace(char c){
	
	if
}

int fget_word(FILE* fp, char *word)
{
	int cnt;
	char c;
	
	while ( (c=fgetc(fp)) != EOF)
		{ 
			 if(is_whitespace(c) ==0)
			 	break;
		};
	
		
	if(c==EOF)
	{
		return 0;
	}
	
	cnt =0;
	word[cnt++] = c;
	word[cnt] = '\0';
	
	while ((word [cnt] = fgetc(fp)) != EOF)
	{
		if (is_whitespace(word[cnt])==1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}
	
	return cnt;
}


int main(int argc, char *argv[]) {

	FILE *fp; 
	char filepath[100];

	
	
	printf(" input the file path : ");
	scanf("%s",filepath);
	fp=fopen(filepath,"r");
	
	if(fp==NULL)
	{
		printf("file path is wrong %s\n",filepath);
		
		return -1;	
	}
	fclose(fp);

	
	
	

}

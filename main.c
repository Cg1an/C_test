#include <stdio.h>

int main(void) {
  char c;
  int count=0;
  FILE *fp;
  fp=fopen("a.txt","r");
  if(fp==NULL){
    perror("fopen");
    return 1;
  }
  while((c=fgetc(fp))!=EOF){
    if(c>='a'&&c<='z')
      count++;
  }
  printf("该文件里小写字母 %d个。",count);
  fclose(fp);
  return 0;
}
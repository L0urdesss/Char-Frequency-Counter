//Maria Lourdes T. Villaruz    BSCS-2B-M
#include <stdio.h>
#include <stdlib.h>
int main(){
int i,freq[128]={};
char ch;
char filename[1000];
FILE *fp;
printf("Input file: ");
scanf("%s",filename);
fp = fopen(filename,"r");
if (fp==NULL){
    printf("File error.\n");
    system("pause");
}
else {
    while(!feof(fp)){
        ch = fgetc(fp);
        freq[ch]++;

    }
    fclose(fp);
    fflush(stdin);
    printf("\nCharacter    Frequency\n");
    for(i =32; i<=32; i++){
        if (freq[i]!=0){
             printf("\nspace\t\t %d", freq[i]);
        }
    }
    for(i =65; i<=90; i++){
        if (freq[i]!=0){
             printf("\n%c\t\t %d",i, freq[i]);
}
}
  for(i =97; i<=122; i++){
        if (freq[i]!=0){
             printf("\n%c\t\t %d",i, freq[i]);
}
}
  for(i =33; i<=57; i++){
        if (freq[i]!=0){
             printf("\n%c\t\t %d",i, freq[i]);
}
}
}
}


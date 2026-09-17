#include <stdio.h>
int main (){
    int n, m ;
    char sub[50];
    printf("enter your study hour ");
    scanf("%d",&n);

     printf("enter your qustion solved ");
    scanf("%d",&m);

    printf("enter your subj ");
    scanf("%s",sub);

    printf("%d hour\n",n);
    printf("%d solved\n",m);
    printf("%s focused\n",sub);

    return 0;
}
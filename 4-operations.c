#include <stdio.h>
#include <stdlib.h>
int somme(int a,int b){
       printf("donner deux nombres :");
       scanf("%d %d",&a,&b);
    return a+b;
}
int prod(int a,int b){
       printf("donner deux nombres :");
       scanf("%d %d",&a,&b);
    return a*b;
}
int divis(int a,int b)
{
       printf("donner deux nombres :");
       scanf("%d %d",&a,&b);
       if (b == 0)
       {
           printf("Error: denominator souldn't be a zero")
           exit(0); // to exit the program
       }
       return a/b;
}
int sous(int a,int b){
       printf("donner deux nombres :");
       scanf("%d %d",&a,&b);
    return a-b;
}
int main()
{
    int a;
    int b;
    int op;
    printf("Quelle operation voulez-vous ?\n1 : somme \n2 : produit\n3 : division \n4 : soustraction \n");
    scanf("%d",&op);
    switch(op)
    {
        case 1 : printf("la somme est : %d",somme(a,b));
        break;
        case 2 : printf("le produit est : %d",prod(a,b));
        break;
        case 3 : printf("la division est : %d",divis(a,b));
        break;
        case 4 : printf("la soustraction est : %d",sous(a,b));
        break;
       default:
                 printf("Error! operator is not correct");
    }
    return 0;
}

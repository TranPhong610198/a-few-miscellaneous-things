#include<stdio.h>

//int main(){

  /*Hello World Program
   * printf("Hello, World!\n");

    printf("Welcom to C language\n");

    printf("What's your name ?\n");

    char name[100];

    gets(name);

    printf("Hello ");
    printf("%s",name);
   */

// test for fun
//  float a = 1.11;
//  float b = 1.5 ;
//  printf ("%f", (a+b));
//  float x,y ;
//  scanf("%f","%f",&x,&y);
//  printf ("%f", (x+y));
//    return 0;

//    int a;
//    scanf("%d",&a);
//    char* input[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//    if (a>9){
//        printf("Greater than 9");
//    }
//    else {
//        printf("%s",input[a]);
//    }
//
//
//    return 0;
//
//}


//
//    int factorial(int a){
//        int b =1;
//        for (int i=1 ; i<=a ; i++)
//            b = b * i;
//        return b;
//    }
//
//    int main(){
//
//        int n;
//        scanf("%d",&n);
//        printf("factorial of n is : %d\n", factorial(n));
//        int count = 0;
//        int z = factorial(n);
//        while (z % 10 ==0 ){
//            count ++;
//            z /= 10;
//        }
//        printf ("there are %d in the end of n factorial\n", count);
//        printf ("the number before the last 0 is : %d\n", z%10 );
//        return 0;
//    }



int main(){
    int n,m[100000] ;
    int sum = 0, t[10000000] ;
    scanf("%d",&n);
    for (int i=1 ; i<=n ; i++)
        scanf("%d",&m[i]);
    for (int i=1 ; i<=n ; i++){
        sum += m[i];
        sum = t[i];
    }
    for (int i=1 ; i<=n ; i++)
        printf("%d",t[i]);


}
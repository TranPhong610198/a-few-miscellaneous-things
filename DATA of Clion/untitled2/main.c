#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char a[61];
        gets(a);
        char tmp[61]; int ok=1;
        int b[61];
        int c[61]; int nho=0;
        int cnt[12]={0};
        int cnt2[12]={0};
        for(int i=0;i<strlen(a); i++) {
            b[i] = a[i]-'0';
            c[i] = a[i]-'0';
            cnt[b[i]]++; cnt2[b[i]]++;
            }
        for(int i=0;i<strlen(a) -1; i++)
            {
                for (int j=strlen(a) -1;j>=0;j--)
                {
                    int tmp = c[j]+b[j]+nho;
                    c[j] = tmp%10;
                    nho = tmp/10;
                }
                if (nho!=0) ok=0;

                for(int k=0;k<strlen(a); k++)
                {
                cnt[c[k]]++;
                }
            }
        for (int i=0;i<10; i++) { if(cnt[i] && cnt2[i]){
                int m=cnt[i];
                int n=cnt2[i];
                if(m/n != strlen(a)) ok=0;}}
                if (ok) printf("YES\n");
                else printf("NO\n");
        }}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    if(n<2){ printf("0\n"); return 0; }
    int m=(n+1)/2;
    unsigned char *c=calloc(m,1);
    for(int i=3;(long long)i*i<=n;i+=2){
        if(!c[i>>1]){
            long long step=i<<1;
            for(long long j=(long long)i*i;j<=n;j+=step) c[j>>1]=1;
        }
    }
    int cnt=1;
    for(int i=1;i<m;i++) if(!c[i]) cnt++;
    printf("%d\n",cnt);
    free(c);
    return 0;
}

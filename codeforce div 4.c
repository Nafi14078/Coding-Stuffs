#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
int a,b,c;
for(int i=0;i<t;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=10||b+c>=10||c+a>=10){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
return 0;
}

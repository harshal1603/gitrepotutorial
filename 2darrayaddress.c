#include<stdio.h>
#include<string.h>
void main(){
int ba,r,c,i,j,s,ad;
enum t{row,column};
enum t ty;
char type[20];
printf("enter base address row column ith index jth index and size\n");
scanf("%d %d %d %d %d %d",&ba,&r,&c,&i,&j,&s);
printf("enter row major or column major by writing row or column");
scanf("%s",type);
type[strlen(type)];
ty=type;
printf("%u\n",ty);
if(ty==t[0]){
ad=ba+((i-1)*c+(j-1))*s;
printf("address is %d",ad);
}
else if(ty==t[1]){
ad=ba+((j-1)*r+(i-1))*s;
printf("address is %d",ad);
}

}

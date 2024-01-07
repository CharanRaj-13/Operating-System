//C program to implement the paging concept...
#include<stdio.h>
#include<conio.h>
main(){
    int ms,ps,nop,np,rempages,i,j,x,y,pa,offset;
    int s[10],fno[10][20];
    printf("\n Enter the memory size:");
    scanf("%d",&ms);
    printf("\n Enter the page size:");
    scanf("%d",&ps);
    nop=ms/ps;
    printf("\n The number of pages available:%d",nop);
    printf("\n Enter the number of process:");
    scanf("%d",&np);
    rempages=nop;
    for(i=0;i<=np;i++){
        printf("Enter the no of pages required for p[%d]",i);
        scanf("%d",&s[i]);
        if(s[i]>rempages){
            printf("\n Memory is full");
            break;
        }
        rempages=rempages-s[i];
        printf("\n Enter the pagetable for p[%d]",i);
        for(j=0;j<s[i];j++){
            scanf("%d",&fno[i][j]);
        }
    }
    printf("\n Enter the logical address to find physical address...");
    printf("\n Enter the process no, page number and offset:");
    scanf("%d%d%d",&x,&y,&offset);
    if(x>=np||y>=s[i]||offset>=ps){
        printf("Invalid");
    }
    else{
            pa=fno[x][y]*ps+offset;
            printf("\n The physical address is : %d",pa);
    }
    getch();
}
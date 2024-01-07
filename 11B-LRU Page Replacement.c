//LRU Page Replacement
#include<stdio.h>
#include<conio.h>
main(){
    int i,j,k,n,rs[25],f,count[10],pf=0,m[10],min,next=1,flag[25];
    printf("\n Enter the length of the reference string :");
    scanf("%d",&n);
    printf("\n Enter the reference string:");
    for(i=0;i<n;i++){
        scanf("%d",&rs[i]);
    }
    printf("\n Enter the number of frames:");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        count[i]=0;
        m[i]=-1;
    }
    printf("\n The page replacement process is...");
    for(i=0;i<n;i++){
        for(j=0;j<f;j++){
            if(m[j]==rs[i]){
                flag[i]=1;
                count[i]=next;
                next++;
            }
        }
        if(flag[i]==0){
            if(i<f){
                m[i]=rs[i];
                count[i]=next;
                next++;
            }
            else{
                min=0;
                for(j=1;j<f;j++){
                    if(count[min]>count[j]){
                        min=j;
                        m[min]=rs[i];
                        count[min]=next;
                        next++;
                    }
                }
            }
            pf++;
        }
        for(j=0;j<f;j++){
            printf("\t %d",m[j]);
        }
        if(flag[i]==0)
            printf("\n PF no:%d\n",pf);
    }
    printf("\n The number of page fault in LRU is : %d",pf);
    getch();
}

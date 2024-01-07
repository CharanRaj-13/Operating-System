//FIFO page replacement
#include<stdio.h>
#include<conio.h>
main(){
    int i,j,k,n,rs[25],f,pf=0,count=0,m[10];
    printf("\n Enter the length of the reference string :");
    scanf("%d",&n);
    printf("\n Enter the reference string : ");
    for(i=0;i<n;i++){
        scanf("%d",&rs[i]);
    }
    printf("\n Enter the number of frames : ");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        m[i]=-1;
    }
    printf("\n The Page Replacement Process...");
    for(i=0;i<n;i++){
        for(k=0;k<f;k++){
            if(m[k]==rs[i]){
                break;
            }
        }
        if(k==f){
            m[count++]=rs[i];
            pf++;
        }
        for(j=0;j<f;j++){
            printf("\t %d",m[j]);
        }
        if(k==f)
            printf("\n PF no:%d\n",pf);
        if(count==f)
            count=0;
    }
    printf("\n The number of page fault using FIFO are %d",pf);
    getch();
}

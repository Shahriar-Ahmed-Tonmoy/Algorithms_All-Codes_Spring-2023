/*Greedy-Algorithm_Fractional-Knapsack-Problem*/

#include<stdio.h>

void knapsack(int num,float wt[],float profit[],int capacity)
{

    int i,j,tp=0,u;
    float x[i];
    u=capacity;
    for(i=0; i<num; i++)
    {
        x[i]=0;
    }

    for(i=0; i<num; i++)
    {
        if(wt[i]>u)
        {
            break;
        }
        else
        {
            x[i]=1;
            tp=tp+profit[i];
            u=u-wt[i];
        }
    }
    if(i<num)
    {
        x[i]=u/wt[i];
    }
    tp=tp+(profit[i]*x[i]);

    printf("\n The result vector is=");
    for(i=0;i<num;i++){
        printf("%f \t");
    }
    printf("The maximum profit is=%f",tp);


}
int main()
{
    int num, i,j,capacity;
    float wt[20],profit[20],ratio[20],temp;

    printf("Enter the number of object=");
    scanf("%d",&num);
    printf("Enter the weights and profits of each object:\n");
    for(i=0; i<num; i++)
    {
        scanf("%f %f",&wt[i],&profit[i]);
    }

    printf("Enter the capacity of the knapsack:");
    scanf("%d",&capacity);

    for(i=0; i<num; i++)
    {
        ratio[i]=profit[i]/wt[i];
    }

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=wt[j];
                wt[j]=wt[i];
                wt[i]=temp;


                temp=profit[j];
                profit[j]=profit[i];
                profit[i]=temp;

            }
        }

    }
knapsack(num,wt,profit,capacity);
return 0;

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,arr[50],i,N=0;
    float Ei,temp,Xcal=0.0,Xtab;
    printf("Enter no. of observed value you want:");
    scanf("%d",&n);
    printf("Enter observed values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        N +=arr[i];
    }
    printf("Enter tabulated value of X:");
    scanf("%f",&Xtab);
    Ei=(float)N/n;
    printf("Oi\tEi\t((Oi-Ei)^2)/Ei\n");
    for(i=0;i<n;i++)
    {
        temp=arr[i]-Ei;
        temp=pow(temp,2);
        temp=temp/Ei;
        Xcal +=temp;
        printf("%d\t%.3f\t%.3f\n",arr[i],Ei,temp);
    }
    printf("\nXcal=%f",Xcal);
    if(Xtab>Xcal)
    {
        printf("\nWe accept the null hypothesis H0.");
    }
    else
    {
        printf("\nWe reject the null hypothesis H0.");
    }

}

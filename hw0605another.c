#include"hw0605.h"
void print_card( const uint8_t player[13] )
{
    for(int i=0;i<13;i++)
    {
        printf("%d ",player[i]);
    }
    printf("\n");
}

int32_t sort_card( uint8_t player[13], int32_t ( * compare)( int32_t a,int32_t b ) )
{
    for(int i=0;i<13;i++)
    {
        for(int j=i;j<13;j++)
        {
            if(compare(player[i],player[j]))
            {
                int32_t temp=player[i];
                player[i]=player[j];
                player[j]=temp;
            }
        }
    }
    return 0;
}

int32_t func01(int32_t a,int32_t b)
{
    int32_t numA=a%13;
    int32_t numB=b%13;
    int32_t patternA=a/4;
    int32_t patternB=b/4;
    if(a%13==0||a%13==1)
    {
        numA=a%13+13;
    }
    if(b%13==0||b%13==1)
    {
        numB=b%13+13;
    }
    if(numA!=numB)
    return numB > numA;
    else
    return patternA > patternB;
}

int32_t func02(int32_t a,int32_t b)
{
    int32_t numA=a%13;
    int32_t numB=b%13;
    int32_t patternA=a/4;
    int32_t patternB=b/4;
    if(a%13==0||a%13==1||a%13==2)
    {
        numA=a%13+13;
    }
    if(b%13==0||b%13==1||b%13==2)
    {
        numB=b%13+13;
    }
    if(numA!=numB)
    return numB > numA;
    else
    return patternA >patternB;
}

int32_t func03(int32_t a,int32_t b)
{
    int32_t patternA=(a-1)/13;
    int32_t patternB=(b-1)/13;
    if(a%13==1)
    patternA=patternA*2+1;
    else
    patternA=patternA*2;
    if(b%13==1)
    patternB=patternB*2+1;
    else
    patternB=patternB*2;
    if(patternA==patternB)
    {
        return b > a;
    }
    else
    {
        return a > b;
    }
}


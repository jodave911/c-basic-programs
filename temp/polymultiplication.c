#include<stdio.h>
struct Polynomial
{
    int coeff;
    int exp;
};

struct Polynomial first[15], second[15], result[30],rn[30],final[30];

void display(struct Polynomial poly[], int terms)
{
    int i;
    printf("\n");
    for(i = 0; i < terms ; i++)
    {
        printf("%dX^%d+ ", poly[i].coeff, poly[i].exp);
    }
}

int readExpression(struct Polynomial poly[])
{
    int terms, i;
    printf("\nNumber of terms: ");
    scanf("%d", &terms);
    printf("\nEnter the coeffecients and exponents in DESCENDING order");
    for(i = 0 ; i<terms; i++)
    {
        printf("\nCoeffecient :");
        scanf("%d", &poly[i].coeff);
        printf("Exponent :");
        scanf("%d", &poly[i].exp);
    }
    return terms;
}

int multi(int firstCount, int secondCount)
{
    int i, j, k=0,temp;
    for(i=0;i<firstCount;i++)
    {
    	for(j=0;j<secondCount;j++)
    	{
    	    result[k].coeff = first[i].coeff * second[j].coeff;
            result[k].exp=first[i].exp + second[j].exp;
            k=k+1;
    	}
    }
  display(result,k);
    return k;
}
int compare(struct Polynomial poly[], int te)
{
	int i, j,temp,k=0,n=0;
	for(i=0;i<te;i++)
	{
		for(j=i+1;j<te;j++)
		{
			if(result[i].exp == result[j].exp)
			{
				rn[k].coeff = result[i].coeff + result[j].coeff;
            			rn[k].exp = result[i].exp;
            			result[j].coeff=0;
            			result[j].exp=0;
  
            			k++;
            			break;
			}
			
		}
		if(j==te)
		{
		 
				rn[k].coeff = result[i].coeff;
            			rn[k].exp = result[i].exp;
            			
            			k++;
            			
		}
	}
	for(i=0;i<k;i++)
	{
		if(rn[i].coeff !=0)
		{
			final[n].coeff = rn[i].coeff;
            		final[n].exp = rn[i].exp;
            		n++;	
		}
	}
	return n;
	
}



int main()
{
    int firstCount, secondCount, resultCount,new;
    printf("\nFirst Expression:\n");
    firstCount = readExpression(first);
    printf("\nSecond Expression:\n");
    
    secondCount = readExpression(second);
    printf("\nFirst Expression");
    
    display(first, firstCount);
    display(second, secondCount);
    
    resultCount = multi(firstCount, secondCount);
    new=compare(result,resultCount);
    printf("\nResultant Expression:\n");
    display(result, resultCount);
    
    display(final,new);
    //printf("value of k is %d",resultCount);
    return 0;
}
	
	
	
	
	
	
	

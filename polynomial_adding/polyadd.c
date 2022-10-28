#include<stdio.h>

struct poly{
	int coeff;
	int exp;
};


struct poly a[60], b[60], c[60];

int readpoly(struct poly p[60]){
	int t, i;
	printf("\n Enter the no of terms :");
	scanf("%d", &t);

	printf("enter poly detials coefff and exp");
	for(i=0 ; i<t ; i++){
		printf("enter coeff %d :", i+1);
		scanf("%d", &p[i].coeff);
		printf("enter exp %d :", i+1);
                scanf("%d", &p[i].exp);
	}
	return t;
}

int adding(struct poly a[60], struct poly b[60], struct poly c[60], int t1, int t2){
	int i, j, k;
	i=0;
	j=0;
	k=0;

	while(i<t1 && j<t2){
		if(a[i].exp=b[j].exp){
			c[k].coeff= a[i].coeff +b[j].coeff;
			c[k].exp= a[k].exp;
			i++;
			j++;
			k++;
		}
		else if(a[i].exp>b[j].exp){
			c[k].coeff= a[i].coeff;
			c[k].exp= a[i].exp;
			i++;
			k++;
		}
		else{
			c[k].coeff= b[j].coeff;
			c[k].exp= b[j].exp;
			j++;
			k++;
		}
	}
	while(i<t1){
		c[k].coeff= a[i].coeff;
		c[k].exp= a[i].exp;
		i++;
		k++;
	}

	while(j<t2){
		c[k].coeff= b[j].coeff;
		c[k].exp= b[j].exp;
		j++;
		k++;
	}
	return(k);
}

void display(struct poly te[10], int t){
	int k;
	for (k=0 ; k<t ; k++)
		printf("%d(X^%d)",te[k].coeff,te[k].exp);
//	printf("%d(X^%d)",te[t-1].coeff,te[t-1].exp);
}

int main(){

	int a1,b2,c3;
	a1=readpoly(a);
	printf(" \n First polynomial : ");
	display(a,a1);
	
	b2=readpoly(b);
	printf(" \n Second polynomial : ");
	display(b,b2);
	
	c3=adding(a,b,c,a1,b2);
	printf(" \n\n Resultant polynomial after addition : ");
	display(c,c3);
	
	printf("\n");

	return 0;
}



 

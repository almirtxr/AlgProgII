#include<stdio.h>
#define MAX 10
bool temPar(int n, int v[]){
	if (n == 1){
		if (v[0]%2 == 0)
			return true;
		else return false;
	}
	else{
		if (v[n-1]%2 == 0)
			return true;
		else
			return temPar(n-1, v);
	}
}

int main(){
	int v[MAX];
	int n, i;

	scanf("Quantas posições o vetor terá? %d", &n);
	for (i=0; i< n; i++){
		scanf("Preencha o vetor: %d", &v[i]);
	}
	printf("Vetor tem numero par? %d\n", temPar(n,v));
	return 0;
}
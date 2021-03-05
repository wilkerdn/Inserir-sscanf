#include <stdio.h>

int main(){
	char str[1000], rua[200], num[100], bairro[300];
	
	fgets(str,1000,stdin); // digitar o nome da rua,numero,bairro (separados po virgula)
	
	sscanf(str, "%[^,],%[^,],%[^\n]", rua, num, bairro);
	
	printf("%s\n%s\n%s\n", rua,num,bairro);
	
	return 0;
}
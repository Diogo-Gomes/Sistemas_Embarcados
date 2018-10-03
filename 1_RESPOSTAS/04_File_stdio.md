Para todas as questões, utilize as funções da biblioteca `stdio.h` de leitura e de escrita em arquivo 
(`fopen()`, `fclose()`, `fwrite()`, `fread()`, dentre outras). Compile os códigos com o gcc e execute-os via terminal.

1. Crie um código em C para escrever "Ola mundo!" em um arquivo chamado 'ola_mundo.txt'.
```C
#include <stdio.h>
#include <stdlib.h> /* Para a função exit() */
int main(int argc, const char * argv[]) {

FILE *fp;
fp=fopen ("ola_mundo.txt","w");
char c[100] = "ola_mundo!"; 
fputs(c, fp);
return 0;
}
```
2. Crie um código em C que pergunta ao usuário seu nome e sua idade, 
e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. 
Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':
```C
#include <stdio.h>
#include <stdlib.h> /* Para a função exit() */

int main(int argc, const char * argv[]) {

	FILE *pt;
	char nome[20];
	int idade;

	pt = fopen("Diogo.txt", "a");	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	fprintf(pt, "Nome: %s \n", nome);
	fprintf(pt, "Idade: %da nos \n", idade);
	fclose(pt);
	return 0;	

}
```C

```bash
$ ./name
$ Digite o seu nome: Diogo
$ Digite a sua idade: 21
$ cat Diogo.txt
$ Nome: Diogo
$ Idade: 21 anos
```

3. Crie um código em C que recebe o nome do usuário e e sua idade como argumentos de entrada 
(usando as variáveis `argc` e `*argv[]`), e escreve este conteúdo em um arquivo com o seu nome e extensão '.txt'. 
Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':
```C
#include <stdio.h>
#include <stdlib.h> /* Para a função exit() */

int main(int argc, const char *argv[]) {

	FILE *pt;
	char nome[20];
	int idade;

	pt = fopen("Diogo.txt", "a");	
	fprintf(pt, "Nome: %s \n", argv[1]);
	fprintf(pt, "Idade: %s anos \n", argv[2]);
	fclose(pt);
	return 0;	

}
```
```bash
$ ./narg Diogo 21
$ cat Diogo.txt
$ Nome: Diogo
$ Idade: 21 anos
```

4. Crie uma função que retorna o tamanho de um arquivo, usando o seguinte protótipo:
`int tam_arq_texto(char *nome_arquivo);` 
Salve esta função em um arquivo separado chamado 'bib_arqs.c'. 
Salve o protótipo em um arquivo chamado 'bib_arqs.h'. 
Compile 'bib_arqs.c' para gerar o objeto 'bib_arqs.o'.
```C
//bib_arqs.c
#include "bib_arqs.h"
#include <stdio.h>
#include <stdlib.h>


int tam_arq_texto(char *nome_arquivo) {
  FILE *fp;
  
  int i=0;
  char c;
  fp = fopen(nome_arquivo,"r");
  c = getc(fp);
  while (!feof(fp))        
    {
    	i++;
      	c = getc(fp);   
    }
    printf("Seu arquivo tem %i bytes\n",i);
	fclose(fp);
  return 0;
}

```


5. Crie uma função que lê o conteúdo de um arquivo-texto e o guarda em uma string, usando o seguinte protótipo: `char* le_arq_texto(char *nome_arquivo);` Repare que o conteúdo do arquivo é armazenado em um vetor interno à função, e o endereço do vetor é retornado ao final. (Se você alocar este vetor dinamicamente, lembre-se de liberar a memória dele quando acabar o seu uso.) Salve esta função no mesmo arquivo da questão 4, chamado 'bib_arqs.c'. Salve o protótipo no arquivo 'bib_arqs.h'. Compile 'bib_arqs.c' novamente para gerar o objeto 'bib_arqs.o'.

6. Crie um código em C que copia a funcionalidade básica do comando `cat`: escrever o conteúdo de um arquivo-texto no terminal. Reaproveite as funções já criadas nas questões anteriores. Por exemplo, considerando que o código criado recebeu o nome de 'cat_falsificado':

```bash
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./cat_falsificado ola.txt
$ Ola mundo cruel! Ola universo ingrato!
```

7. Crie um código em C que conta a ocorrência de uma palavra-chave em um arquivo-texto, e escreve o resultado no terminal. Reaproveite as funções já criadas nas questões anteriores. Por exemplo, considerando que o código criado recebeu o nome de 'busca_e_conta':

```bash
$ echo Ola mundo cruel! Ola universo ingrato! > ola.txt
$ ./busca_e_conta Ola ola.txt
$ 'Ola' ocorre 2 vezes no arquivo 'ola.txt'.
```

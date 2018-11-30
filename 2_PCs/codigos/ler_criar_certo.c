#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>//necessário para strcat
#include <fcntl.h>
#include <unistd.h>

int main(void)
{

FILE    *infile_nome;
char    *nome_buffer;//buffer
char	nome[51];
char	cpf[22];
char	nome_txt[51];
char	k;
int 	fp, i;
long    numbytes;
 
// abre um arquivo existente para leitura
infile_nome = fopen("nome.txt", "r");
 
if(infile_nome == NULL)
    return 1;
 
// Obtém o número de bytes 
fseek(infile_nome, 0L, SEEK_END);
numbytes = ftell(infile_nome);
 
// redefinir o indicador de posição do arquivo para o início do arquivo 
fseek(infile_nome, 0L, SEEK_SET);	
 
// pega memória suficiente para o buffer conter o texto
nome_buffer = (char*)calloc(numbytes, sizeof(char));	
 
// erro de memoria
if(nome_buffer == NULL)
    return 1;
 
// copiar todo o texto para o buffer
fread(nome_buffer, sizeof(char), numbytes, infile_nome);
fclose(infile_nome);

int len_nome, len_cpf;



strcpy(nome, &nome_buffer[0]);
strcpy(nome_txt, &nome_buffer[0]); 
strcat(nome_txt,".txt");
printf("%s\n", nome);

strcpy(cpf,"CPF: ");
strcat(cpf,"123.456.789-99");
strcat(cpf,"\n");

len_cpf = strlen(cpf);
len_nome = strlen(nome_txt);


//printf("tamanho = %d\n", len_nome);

fp = open (nome_txt, O_RDWR | O_CREAT, S_IRWXU);
if(fp==-1)
	{
	printf ("Erro na abertura do arquivo.\n");
	exit (1);
	}
for(i=0; nome[i]; i++) { 
	if (i == (len_nome-4)){	
		write(fp, "\n", 1); 	
		}	
	else {
		if (i == 0){	
			write(fp, "NOME: ", 6);			
			}
		write(fp, &(nome[i]), 1); // Grava a string, caractere a caractere
		}
	}
write(fp, cpf, len_cpf);
close(fp);





return 0;
}

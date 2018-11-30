#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>//necessário para strcat
#include <fcntl.h>
#include <unistd.h>

int main(void)
{

FILE    *infile_nome;
FILE    *infile_cpf;

char    *nome_buffer;//buffer
char	nome[60];
char	cpf[22];
char	nome_txt[51];
char	rg[14];
char	data[35];
char	pais[120];
char	k;
int 	fp, i;
long    numbytes;
 
// abre um arquivo existente para leitura
infile_nome = fopen("nome.txt", "r");
 
if(infile_nome == NULL) {
    return 1; }
 
// Obtém o número de bytes 
fseek(infile_nome, 0L, SEEK_END);
numbytes = ftell(infile_nome);
 
// redefinir o indicador de posição do arquivo para o início do arquivo 
fseek(infile_nome, 0L, SEEK_SET);	
 
// pega memória suficiente para o buffer conter o texto
nome_buffer = (char*)calloc(numbytes, sizeof(char));	
 
// erro de memoria
if(nome_buffer == NULL) {
    return 1; }
 
// copiar todo o texto para o buffer
fread(nome_buffer, sizeof(char), numbytes, infile_nome);
fclose(infile_nome);

int len_nome, len_cpf, len_rg, len_data, len_pais;

strcpy(nome, &nome_buffer[0]);
strcpy(nome_txt, &nome_buffer[0]); 
strcat(nome_txt,".txt");
//printf("%s\n", nome);

strcpy(cpf,"CPF: ");
strcat(cpf,"123.456.789-99");
strcat(cpf,"\n");

strcpy(rg,"RG: ");
strcat(rg,"1.234.567");
strcat(rg,"\n");

strcpy(data,"DATA DE NASCIMENTO: ");
strcat(data,"01/10/1010");
strcat(data,"\n");

strcpy(pais,"NOME DOS PAIS: ");
strcat(pais,"MÃE DO FULANO \n PAI DO FULANO");
strcat(pais,"\n");


len_nome = strlen(nome_txt);
len_cpf = strlen(cpf);
len_rg = strlen(rg);
len_data = strlen(data);
len_pais = strlen(pais);

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
write(fp, rg, len_rg);
write(fp, data, len_data);
write(fp, pais, len_pais);

close(fp);

return 0;
}

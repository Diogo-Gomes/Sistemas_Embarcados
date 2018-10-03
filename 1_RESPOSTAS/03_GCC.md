1 - Crie um "Olá mundo!" em C.

```C
  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
  printf("Olá Mundo Cruel !\n");
  }
```

2 - Crie um código em C que pergunta ao usuário o seu nome, e imprime no terminal "Ola " e o nome do usuário. 
Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_1':

```C                                 

#include <stdio.h>
#include <stdlib.h>

int main()
{
        char st[10]; 
        printf("Digite seu nome:\n");
        scanf("%s",st);
        printf("Olá %s\n",st);
}
```
3 - Apresente os comportamentos do código anterior nos seguintes casos:
(a) Se o usuário insere mais de um nome.

Digite o seu nome: Doigo Gomes
Olá Diogo

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:

Digite o seu nome: "Diogo Gomes"
Olá "Diogo

(c) Se é usado um pipe. Por exemplo:

```C
$ echo Diogo | ./ola_usuario_1
Olá DIogo

```
(d) Se é usado um pipe com mais de um nome. Por exemplo:

```C
$ echo Diogo Gomes | ./ola_usuario_1
Olá Diogo

```
(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:

```C
$ echo "DIogo Gomes" | ./ola_usuario_1
Olá Diogo

```
(f) Se é usado o redirecionamento de arquivo. Por exemplo:

```C
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
Olá Ola

```
4. Crie um código em C que recebe o nome do usuário como um argumento de entrada (usando as variáveis argc e *argv[]), e imprime no terminal "Ola " e o nome do usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_2':

```bash
$ ./ola_usuario_2 Eu
$ Ola Eu
```

5. Apresente os comportamentos do código anterior nos seguintes casos:

(a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_2 Eu Mesmo
```

(b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_2 "Eu Mesmo"
```

(c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_2
```

(d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
```

(e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_2
```

(f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_2 < ola.txt
```

6. Crie um código em C que faz o mesmo que o código da questão 4, e em seguida imprime no terminal quantos valores de entrada foram fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_usuario_3':

```bash
$ ./ola_usuario_3 Eu
$ Ola Eu
$ Numero de entradas = 2
```

7. Crie um código em C que imprime todos os argumentos de entrada fornecidos pelo usuário. Por exemplo, considerando que o código criado recebeu o nome de 'ola_argumentos':

```bash
$ ./ola_argumentos Eu Mesmo e Minha Pessoa
$ Argumentos: Eu Mesmo e Minha Pessoa
```

8. Crie uma função que retorna a quantidade de caracteres em uma string, usando o seguinte protótipo:
`int Num_Caracs(char *string);` Salve-a em um arquivo separado chamado 'num_caracs.c'. Salve o protótipo em um arquivo chamado 'num_caracs.h'. Compile 'num_caracs.c' para gerar o objeto 'num_caracs.o'.

9. Re-utilize o objeto criado na questão 8 para criar um código que imprime cada argumento de entrada e a quantidade de caracteres de cada um desses argumentos. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_1':

```bash
$ ./ola_num_caracs_1 Eu Mesmo
$ Argumento: ./ola_num_caracs_1 / Numero de caracteres: 18
$ Argumento: Eu / Numero de caracteres: 2
$ Argumento: Mesmo / Numero de caracteres: 5
```

10. Crie um Makefile para a questão anterior.

11. Re-utilize o objeto criado na questão 8 para criar um código que imprime o total de caracteres nos argumentos de entrada. Por exemplo, considerando que o código criado recebeu o nome de 'ola_num_caracs_2':

```bash
$ ./ola_num_caracs_2 Eu Mesmo
$ Total de caracteres de entrada: 25
```

12. Crie um Makefile para a questão anterior.

1 - Como se utiliza o comando ps para:
(a) Mostrar todos os processos rodando na máquina?
  $ps

(b) Mostrar os processos de um usuário?
  $ps -u usuário

(c) Ordenar todos os processos de acordo com o uso da CPU?
  $ ps -eo pid,ppid,cmd,%mem,%cpu --sort=-%cpu | head

(d) Mostrar a quanto tempo cada processo está rodando?
  $ps -e -o pid,comm,etime

2 - De onde vem o nome fork()?
 Vem de BIfurcação

3 - Quais são as vantagens e desvantagens em utilizar

(a) system()?
Tem como vantegem chamar funções no terminal a partir do próprio aquivo criado

(b) fork() e exec()?
A função fork() tem como vantagem o procesdsamento de determinadas ações em paralelo, entretando, a sua má utilização pode ser prejudicial, como por exemplo a utilização de muita memória.

4 - É possível utilizar o exec() sem executar o fork() antes?

5 - Quais são as características básicas das seguintes funções:

(a) execp()?
utilização da variável de ambiente PATH [execlp() e execvp()]. Esta função irá buscar a nova imagem do processo nos diretórios contidos na variável PATH. Para as versões sem a letra “p“, deverá ser passada uma string contendo o caminho completo para o arquivo executável.

(b) execv()?
vetor de argumentos [execv(), execve() e execvp()]. Os argumentos que serão recebidos em argv são passados em um vetor do tipo char* que já contém todas as strings previamente carregadas.

(c) exece()?
variáveis de ambiente [execle() e execve()]. O último parâmetro destas funções é um vetor para strings (char *) que será recebido pelo novo programa no argumento envp contendo variáveis de ambiente pertinentes para sua execução. Para as versões sem a letra “e“, o ambiente é adquirido a partir de uma variável externa (extern char **environ) já declarada na biblioteca unistd.h.

(d) execvp()?


(e) execve()?


(f) execle()?


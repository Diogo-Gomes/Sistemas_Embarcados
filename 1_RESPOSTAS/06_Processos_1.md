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

(b) execv()?

(c) exece()?

(d) execvp()?

(e) execve()?

(f) execle()?

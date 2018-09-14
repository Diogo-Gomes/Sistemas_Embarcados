1 - Quantos pipes serão criados após as linhas de código a seguir? Por quê?
(a)
int pid;
int fd[2];
pipe(fd);
pid = fork();

Somente um Pipe que interage com PAI e FILHO

(b)
int pid;
int fd[2];
pid = fork();
pipe(fd);

Dois PIPES

2 - Apresente mais cinco sinais importantes do ambiente Unix, além do SIGSEGV, SIGUSR1, SIGUSR2, SIGALRM e SIGINT. Quais são suas características e utilidades?

SIGKILL: Arma absoluta para matar processos, não póde ignorada
SIGSYS: Argumento incorreto de uma chamada de sistema
SIGBUS: Emitido em caso de erro de barramento
SIGILL: Emito quando uma função ilegal é executada
SIGQUIT: Abandona: SInal emitido aos processos do terminal quando com a tecla de abandono (QUIT ou CTRL-d) do teclado são acionados 

3 - Considere o código a seguir:

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void tratamento_alarme(int sig)
{
	system("date");
	alarm(1);
}

int main()
{
	signal(SIGALRM, tratamento_alarme);
	alarm(1);
	printf("Aperte CTRL+C para acabar:\n");
	while(1);
	return 0;
}
Sabendo que a função alarm() tem como entrada a quantidade de segundos para terminar a contagem, quão precisos são os alarmes criados neste código? De onde vem a imprecisão? Este é um método confiável para desenvolver aplicações em tempo real?

Prara esse tipo de aplicação, são considerados precisos, mesmo quando considerado o tempo de execução que o PC(sistema) utiliza. Essa imprecissão é inerente do próprio sistema. 


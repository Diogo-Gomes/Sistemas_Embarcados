1 - Por que o Linux, esse nome?
O nome vem direto do seu criador, Linus Torvalds. O nome é uma junção dos nomes Linus + UNIX.

2 - O que são daemons?
Daemon é um software que fica executando sem o controle direto do usuário.

3 - O que é o shell?
O Shell (concha) é um programa que permite ao usuário iteragir com o sistema operacional através de comandos digitados do teclado.

4 -Por que é possível executar o terminal como superusuário?
Super-usuário ou Root (raiz) refere-se a um tipo de usuário com privilégios absolutos. Com o Root é possível ter controle total sobre o sistema (executar comandos absolutos e ter acesso a processos), o que pode ser muito interessante e também muito perigoso. Portanto o mais recomendado não é logar como Root, e sim utilizar comandos como su e sudo. O primeiro loga como Root e outr usuário em um terminal, podendo depois fazer logoff com o comando exit, o segundo apenas executar um comando em um terminal com privilégios de super usuário.


5 - Qual é o nome completo do usuário que não tem terminal, de acordo com o contexto?
  TAB

6 - Quais são os elementos do teclado existentes nas instruções escritas anteriormente?
  Seta para Cima/Seta para Baixo

7 - Apresente os recentes comandos no terminal para: 
(a) Obter mais informações sobre um comando. 
  man #nome_do_comando

(b) uma lista com os arquivos dentro de uma massa. 
  $ ls

(c) Saca o caminho completo da pasta. 
  $ pwd

d) Trocar de pasta. 
  $ cd
  
-Ir para o diretório home do usuário logado:
	$ cd
-Ir para o diretório acima do atual:
	$ cd ..
-Voltar para o diretório que estávamos antes do atual:
	$ cd -
-Mudar para o diretório raiz do sistema:
	$ cd /
-Ir para o diretório home do usuário logado:
	$ cd ~
-Estando dentro de um diretório, deseja-se entrar em outro pertecente ao diretório atual:
	$ cd #nome_da_pasta
-Entrando em um diretório que não pertence ao diretório atual:
	$ cd #caminho_para_diretorio_que_se_deseja_entrar

(e) Criar uma pasta. 
  $ mkdir #nome_da_pasta

(f) Apagar arquivos definitivamente.
 
 -Arquivo se encontra no diretório atual:
	$ rm #nome_do_arquivo
    ou
	$ rm arquivo1 arquivo2 arquivo3
-Arquivo se encontra em outra pasta:
	$ rm #caminho_para_arquivo
-Apagando arquivos com a mesma extensão:
	$ rm *.txt

(g) Apagar massas definitivamente

-Apagar pasta inteira recursivamente:
	$ rm -rf nomedapasta/
-Apagar arquivos e pastas do diretório atual:
	$ rm -rf *
. 
(h) Copiar os arquivos. 
(i) massas Copiar.
(j) Moverar os arquivos. 
(k) massas de mudas. 
(l) massas renomeadas. 
(m) selecionar o conteúdo de um arquivo.
(n) entre o tipo de arquivo. 
(o) Limpar a tela do terminal. 
(p) Encontrar ocorrências de palavras-chave em um arquivo-texto. 
(q) solicitar informações em um arquivo-texto. 
(r) Substituir as ocorrências de palavras-chave em um arquivo-texto. 
(s) Conferir se dois arquivos são iguais. 
(t) Você está lendo algo na tela.

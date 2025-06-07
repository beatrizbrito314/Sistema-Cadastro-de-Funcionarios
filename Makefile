# cores
ROSA=35
VERDE=32
AMARELO=33
CIANO=36

#alvo
all:
	@echo "\033[$(CIANO)m----------------------------------------\033[0m"
	@echo "\033[$(ROSA)mIniciando a compilação...\033[0m"
	@echo "\033[$(AMARELO)mCompilando main.cpp ...\033[0m"
	g++ -Wall -c main.cpp
	@echo "\033[$(AMARELO)mCompilando funcionario.cpp ...\033[0m"
	g++ -Wall -c funcionario.cpp

	@echo "\033[$(AMARELO)mCompilando desenvolvedor.cpp ...\033[0m"
	g++ -Wall -c desenvolvedor.cpp

	@echo "\033[$(AMARELO)mCompilando estagiario.cpp ...\033[0m"
	g++ -Wall -c estagiario.cpp

	@echo "\033[$(AMARELO)mCompilando gerente.cpp ...\033[0m"
	g++ -Wall -c gerente.cpp

	@echo "\033[$(AMARELO)mCompilando cadastro.cpp ...\033[0m"
	g++ -Wall -c cadastro.cpp

	@echo "\033[$(ROSA)mLinkando arquivos...\033[0m"
	g++ -Wall -o Executavel main.o funcionario.o desenvolvedor.o estagiario.o gerente.o cadastro.o
	@echo "\033[1;$(VERDE)mCompilação realizada com sucesso!:)\033[0m"
	@echo "\033[$(CIANO)m----------------------------------------\033[0m"

clean:
	@echo "\033[$(ROSA)mLimpando arquivos...\033[0m"
	rm -f *.o Executavel
	@echo "\033[1;$(VERDE)mLimpeza realizada com sucesso!\033[0m"
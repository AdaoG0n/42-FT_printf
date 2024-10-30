# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-In_Progress-success?color=black&style=flat-square"/></a> <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://img.shields.io/badge/Follow-me?color=%2312bab9&style=flat-square"/></a> • 42 FT_printf 
 <a href="#" style="pointer-events: none;">
 <img align="right" src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/ft_printf.png" width="400"/>
 </a>
Passo a Passo para o Projeto ft_printf
Para completar o projeto de recodificação da função printf() em C, siga os passos abaixo:
1. Preparação do Ambiente

    Instale o Compilador: Certifique-se de que você tem um compilador C instalado (como gcc).
    Configuração do Repositório: Crie um repositório Git para armazenar seu código.

2. Estrutura do Projeto

    Crie a Estrutura de Diretórios:
        Um diretório para os arquivos de código (src/).
        Um diretório para os cabeçalhos (include/).

3. Implementação da Função ft_printf

    Prototype: Defina o protótipo da função:

    c
    int ft_printf(const char *format, ...);

    Conversões Necessárias: Implemente as seguintes conversões:
        %c: caractere
        %s: string
        %p: ponteiro em formato hexadecimal
        %d: número decimal
        %i: inteiro
        %u: número decimal sem sinal
        %x: número em hexadecimal (minúsculo)
        %X: número em hexadecimal (maiúsculo)
        %%: símbolo de porcentagem

4. Gerenciamento de Argumentos Variáveis

    Utilize as funções va_start, va_arg, e va_end para lidar com um número variável de argumentos.

5. Criação do Makefile

    Crie um Makefile com as seguintes regras:
        NAME: nome do arquivo executável.
        all: compila todos os arquivos.
        clean: remove arquivos temporários.
        fclean: remove todos os arquivos gerados.
        re: recompila tudo.

Exemplo básico de Makefile:

makefile
NAME = libftprintf.a

SRC = src/ft_printf.c src/utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

6. Testes

    Crie programas de teste para verificar a funcionalidade da sua implementação.
    Teste todos os casos de uso, incluindo os casos limites.

7. Submissão

    Faça commit do seu código no repositório Git.
    Verifique se todos os arquivos estão nomeados corretamente e se não há erros de norma.

Dicas Finais

    Mantenha seu código bem estruturado e documentado.
    Revise a documentação sobre funções variádicas em C para melhor compreensão.

Seguindo esses passos, você estará no caminho certo para completar o projeto com sucesso!

<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-100%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-FT_printf?style=flat-square&color=%2312bab9" /> </a>

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/ft_printf.gif)
<p align="center">
  <a href="#testes">Testers</a>  •  <a href="#useful-links">Useful Links</a> 
</p>
 </a>

Para completar o projeto de recodificação da função `printf()` em `C`, siga os passos abaixo:
![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=100&size=40&letterSpacing=0px&duration=1000&pause=4000&center=true&vCenter=true&width=1900&lines=___________________________________________________________________________________________________)


### 1. Estrutura do Projeto

</br> Crie a Estrutura de Diretórios:
</br> Um diretório para os arquivos de código (src/).
</br> Um diretório para os cabeçalhos (include/).

>[!Note]
> Eu decidi deixar tudo no mesmo diretório, mas é boa prática dividir os arquivos nos diretórios correspondentes.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 2. Implementação da Função ft_printf

Prototype: Defina o protótipo da função:
   ```sh
    int ft_printf(const char *format, ...);
   ```
   
Conversões Necessárias:
   <br/>
   Implemente as seguintes conversões:
   </br>     `%c:` caractere
   </br>      `%s:` string
  </br>       `%p:` ponteiro em formato hexadecimal
   </br>      `%d:` número decimal
   </br>      `%i:` inteiro
    </br>     `%u:` número decimal sem sinal
    </br>     `%x:` número em hexadecimal (minúsculo)
  </br>       `%X:` número em hexadecimal (maiúsculo)
   </br>      `%%:` símbolo de porcentagem

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 3. Gerenciamento de Argumentos Variáveis

Utilize as funções `va_start`, `va_arg`, e `va_end` para lidar com um número variável de argumentos.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 4. Criação do Makefile

Crie um Makefile com as seguintes regras:
       </br>  `NAME:` nome do arquivo executável.
      </br>   `all:` compila todos os arquivos.
        </br> `clean:` remove arquivos temporários.
     </br>    `fclean:` remove todos os arquivos gerados.
    </br>     `re:` recompila tudo.

Exemplo básico de Makefile:

```bash
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
```

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Testes

</br> Crie programas de teste para verificar a funcionalidade da sua implementação.
</br> Teste todos os casos de uso, incluindo os casos limites.
</br>

> Segue a baixo a lista de testers para verficar o correto funcionamento do projeto:

| Testers                                                                                              | Author           |
| :--------------------------------------------------------------------------------------------------- | :---            |
| [Debugging with main.c](https://github.com/Kuninoto/42_ft_printf/blob/master/lvl_1_ft_printf/main.c) | `Kuninoto`      |
| [francinette](https://github.com/xicodomingues/francinette)                                          | `xicodomingues` |
| [printfTester](https://github.com/Tripouille/printfTester)                                           | `Tripouille`    |
| [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester)                                | `paulo-santana` |


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Useful Links

| Resource                                                                                                                                      |
| :-------------------------------------------------------------------------------------------------------------------------------------------- |
| [C Tutorial – printf](https://www.codingunit.com/printf-format-specifiers-format-conversions-and-formatted-output)                            |
| [printf Reference](https://cplusplus.com/reference/cstdio/printf)                                                                             |
| [IEEE-754 Floating Point Converter](https://www.h-schmidt.net/FloatConverter/IEEE754.html)                                                    |
| [Printing Floating-Point Numbers](https://www.ryanjuckett.com/printing-floating-point-numbers)                                                |
| [printf(3) — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)                                                          |
| [printf invocation (GNU Coreutils 9.4)](https://www.gnu.org/software/coreutils/manual/html_node/printf-invocation.html#printf-invocation)     |
| [Formatted Output (The GNU C Library)](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html)                              |
| [Table of Output Conversions (The GNU C Library)](https://www.gnu.org/software/libc/manual/html_node/Table-of-Output-Conversions.html)        |
| [Printing Floating-Point Numbers Quickly and Accurately with Integers](https://www.cs.tufts.edu/~nr/cs257/archive/florian-loitsch/printf.pdf) |

>[!Tip]
>Mantenha seu código bem estruturado e documentado.<br/>
>Revise a documentação sobre funções variádicas em C para melhor compreensão.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Earned skills
<p align="left">
  <a href="#" style="pointer-events: none;">
    <img src="https://skillicons.dev/icons?i=c" />
  </a>
</p> 

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)




![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
###### Projeto desenvolvido por: [Adão Gonçalves](https://github.com/AdaoG0n)

![Endpoint Badge](https://img.shields.io/endpoint?url=https%3A%2F%2Fhits.dwyl.com%2FAdaoG0n%2F42-FT_printf.json&style=flat-square&labelColor=black&color=blue)

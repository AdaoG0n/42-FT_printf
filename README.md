# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-In_Progress-success?color=black&style=flat-square"/></a> • 42 FT_printf <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>
 <a href="#" style="pointer-events: none;">
 <img align="right" src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/ft_printf.png" width="400"/>
 </a>

Para completar o projeto de recodificação da função `printf()` em `C`, siga os passos abaixo:
![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=100&size=40&letterSpacing=0px&duration=1000&pause=4000&center=true&vCenter=true&width=550&lines=___________________________________________________________________________________________________________________)


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

### 5. Testes

</br> Crie programas de teste para verificar a funcionalidade da sua implementação.
</br> Teste todos os casos de uso, incluindo os casos limites.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 6. Submissão

</br> Faça commit do seu código no repositório Git.
</br> Verifique se todos os arquivos estão nomeados corretamente e se não há erros de norma.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

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

### Links úteis

- [ ] [francinette](https://github.com/xicodomingues/francinette)</br>
- [ ] [printf_tester](https://github.com/Tripouille/printfTester)

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

###### Projeto desenvolvido por: [Adão Gonçalves](https://github.com/AdaoG0n)

![Endpoint Badge](https://img.shields.io/endpoint?url=https%3A%2F%2Fhits.dwyl.com%2FAdaoG0n%2F42-FT_printf.json&style=flat-square&labelColor=black&color=blue)

<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-100%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/42-FT_printf?style=flat-square&color=%2312bab9" /> </a>

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/ft_printf.gif)
<p align="center">
  <a href="#testing">Testers</a>  •  <a href="#useful-links">Useful Links</a>  •  <a href="https://github.com/AdaoG0n/42-FT_printf/blob/main/README_pt.md">Portuguese 🇵🇹</a>
</p>

To complete the project of recreating the `printf()` function in `C`, follow the steps below:
![Typing SVG](https://readme-typing-svg.demolab.com?font=Fira+Code&weight=100&size=40&letterSpacing=0px&duration=1000&pause=4000&center=true&vCenter=true&width=1900&lines=___________________________________________________________________________________________________)

### 1. Project Structure

Create the Directory Structure:
- A directory for source files `(src/)`.
- A directory for header files `(include/)`.

>[!Note]
> I decided to keep everything in the same directory, but it is good practice to separate files into their respective directories.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 2. Implementing the ft_printf Function

Prototype: Define the function prototype:

```bash
int ft_printf(const char *format, ...);
```

Supported Conversions:
- `%c`: character
- `%s`: string
- `%p`: pointer in hexadecimal format
- `%d`: decimal number
- `%i`: integer
- `%u`: unsigned decimal number
- `%x`: hexadecimal number (lowercase)
- `%X`: hexadecimal number (uppercase)
- `%%`: percent symbol

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 3. Handling Variadic Arguments

Use the following functions to handle a variable number of arguments:
- `va_start`
- `va_arg`
- `va_end`

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### 4. Creating the Makefile

Create a Makefile with the following rules:
- `NAME`: name of the executable file.
- `all`: compiles all files.
- `clean`: removes temporary files.
- `fclean`: removes all generated files.
- `re`: recompiles everything.

Example of a basic `Makefile`:
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

### 5. Testing

Create test programs to verify the functionality of your implementation. Test all use cases, including edge cases.

> Below is a list of testers to verify the correct functioning of the project:

| Testers                                                                                              | Author           |
| :--------------------------------------------------------------------------------------------------- | :---            |
| [Debugging with main.c](https://github.com/Kuninoto/42_ft_printf/blob/master/lvl_1_ft_printf/main.c) | Kuninoto      |
| [francinette](https://github.com/xicodomingues/francinette)                                          | xicodomingues |
| [printfTester](https://github.com/Tripouille/printfTester)                                           | Tripouille    |
| [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester)                                | paulo-santana |

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
> Keep your code well-structured and documented.
> Review documentation on variadic functions in C for better understanding.

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Earned Skills
<p align="left">
  <a href="#" style="pointer-events: none;">
    <img src="https://skillicons.dev/icons?i=c" />
  </a>
</p> 

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
###### Project developed by: [Adão Gonçalves](https://github.com/AdaoG0n)

![Endpoint Badge](https://img.shields.io/endpoint?url=https%3A%2F%2Fhits.dwyl.com%2FAdaoG0n%2F42-FT_printf.json&style=flat-square&labelColor=black&color=blue)

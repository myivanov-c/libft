# Libft – My Custom C Library

> 42 Project | ✅ Grade: 125%  
> Goal: Recreate standard C functions from scratch to build a personal library used in all future 42 projects.

---

## Overview

This project consists of implementing a set of fundamental C functions from the standard C library (`libc`).  
It includes memory management, string manipulation, character checks, and linked list operations.

Libft is the **foundation for all projects in the 42 curriculum** – every future C project will use it.

---

## Functions Implemented

### Part 1 – Libc functions re-coded

| Category          | Functions                                        |
|------------------|--------------------------------------------------|
| Character check  | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| String length & manipulation | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strdup`, `ft_strnstr` |
| Case conversion  | `ft_tolower`, `ft_toupper` |
| Memory allocation| `ft_calloc` |

### Part 2 – Additional utility functions

| Category     | Functions                                      |
|-------------|------------------------------------------------|
| Conversion  | `ft_atoi`, `ft_itoa`                           |
| String split| `ft_split`, `ft_strjoin`, `ft_strtrim`, `ft_substr` |
| Output      | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

### Bonus – Linked List Functions

| List Operations | Description              |
|----------------|--------------------------|
| `ft_lstnew`     | Create a new list node   |
| `ft_lstadd_front` | Add node to front        |
| `ft_lstadd_back` | Add node to back         |
| `ft_lstsize`    | Count nodes              |
| `ft_lstlast`    | Get last node            |
| `ft_lstdelone`  | Delete one node          |
| `ft_lstclear`   | Delete entire list       |
| `ft_lstiter`    | Apply function to each node |
| `ft_lstmap`     | Create new list from function mapping |

---

## ⚙️ Compilation

```bash
make            # Compile libft.a
make bonus      # Compile libft.a + bonus
make clean      # Remove .o files
make fclean     # Remove .o files + libft.a
make re         # Recompile everything
```

To use in your project, include this header:

```c
#include "libft.h"
```

Then run the this command to compile everything in the library and create the library itself:

```bash
make bonus
```

Finaly compile your code with the library:

```bash
gcc -Wall -Wextra -Werror your_code.c libft.a
```

---

## What I Learned

- Deep understanding of **memory handling** in C  
- Manual implementation of **malloc, string, and list logic**  
- Writing **clean, modular, and reusable** C functions  
- Managing a project with **Makefile and .h structure**  
- Complying strictly with the **42 Norminette** coding standards

---

## 📁 Project Structure

```bash
libft/
├── ft_*.c              # All functions implementation
├── libft.h             # Header file with prototypes
├── Makefile            # Compilation script
```

---

## 👤 Author

- **Mykyta Ivanov**  
- Student at 42  
- GitHub: [@myivanov-c](https://github.com/myivanov-c)

---

## 📝 License

This project is open-source and free to use.

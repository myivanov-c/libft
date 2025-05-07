# Libft – 42 Lisboa

 A custom standard C library reimplementation  
 Project validated with a total score of **125%**

---

## 📖 About

**Libft** is a foundational project from the 42 programming school.  
Its purpose is to rebuild essential functions from the C standard library — without relying on them — to deeply understand how memory, strings, and data structures behave at a low level.

---

## 🛠️ Skills Gained

- Manual memory management
- Mastery of pointers and buffer manipulation
- Building a static library (`libft.a`)
- String and character handling from scratch
- Linked list implementation and traversal
- Debugging and problem solving in pure C
- Clean code practices under Norminette

---

## 📦 Project Structure

### Part 1 – Libc Functions

Functions re-implemented:

- `ft_isalpha`  
- `ft_isdigit`  
- `ft_isalnum`  
- `ft_isascii`  
- `ft_isprint`  
- `ft_strlen`  
- `ft_memset`  
- `ft_bzero`  
- `ft_memcpy`  
- `ft_memmove`  
- `ft_strlcpy`  
- `ft_strlcat`  
- `ft_toupper`  
- `ft_tolower`  
- `ft_strchr`  
- `ft_strrchr`  
- `ft_strncmp`  
- `ft_memchr`  
- `ft_memcmp`  
- `ft_strnstr`  
- `ft_atoi`  
- `ft_calloc`  
- `ft_strdup`

### Part 2 – Additional Functions

- `ft_substr`  
- `ft_strjoin`  
- `ft_strtrim`  
- `ft_split`  
- `ft_itoa`  
- `ft_strmapi`  
- `ft_striteri`  
- `ft_putchar_fd`  
- `ft_putstr_fd`  
- `ft_putendl_fd`  
- `ft_putnbr_fd`

### Bonus – Linked List Module

Implemented from scratch:

- `ft_lstnew`  
- `ft_lstadd_front`  
- `ft_lstsize`  
- `ft_lstlast`  
- `ft_lstadd_back`  
- `ft_lstdelone`  
- `ft_lstclear`  
- `ft_lstiter`  
- `ft_lstmap`

---

## 🧹 Makefile Commands

| Command       | Description                          |
|---------------|--------------------------------------|
| `make`        | Compile all `.c` files into `libft.a` |
| `make clean`  | Remove object files (`*.o`)          |
| `make fclean` | Remove object files and `libft.a`    |
| `make re`     | Clean and recompile the library      |

---

## 📌 Notes

- All functions were implemented in C, following the **Norminette** style guide.  
- No standard C library functions were used unless explicitly allowed by the project guidelines.  
- The project includes **all mandatory and bonus parts**, including full linked list implementation.  
- This library is designed to be modular, readable, and reusable across different 42 projects and personal development.

---

## 👤 Author

**Mykyta Ivanov**  
Student @ 42 Lisboa  
GitHub: [@myivanov-c](https://github.com/myivanov-c)

---

## ✅ Project Status

 Completed  
 Validated with 125% score at 42  
 Ready to be reused and expanded in future projects

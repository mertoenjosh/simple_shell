<h1 align="center"> C - Simple Shell </h1>

![gates of hell](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)

---
- This is a simple UNIX command interpreter written in C programming language.

## Authors

<a href="https://www.twitter.com/mertoenjosh" target="_blank" alt="Martin Thuo">Martin Thuo</a>

<a href="mailto:lavenderproductdesign@gmail.com">Lavender Otieno</a>

### Objectives of the task
Explain:
- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?

## COMPILATION
- Execute `build.sh` script (on a UNIX machine) to compile the code. You need to have GCC installed.
```bash
./build.sh
```
- The shell is compiled with GCC with the following command.
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell
```

## Implementations
- [x] The code is **betty** compliance.
- [x] The shell displays a prompt and waits for the user to type a command. A command line always ends with a new line.
- [x] The prompt is displayed again each time a command has been executed.
- [x] The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- [x] The command lines are made only of one word. No arguments will be passed to programs.
- [x] If an executable cannot be found, prints an error message and display the prompt again.
- [x] Handles errors.
- [x] Handles the “end of file” condition (Ctrl+D)
- [x] Handles command lines with arguments.
- [x] Handles the PATH.
- [x] Implements the exit built-in, that exits the shell.
- [x] Implements the *env* built-in, that prints the current environment.
- [ ] Implement the built-in *alias*.
- [ ] Implement the built-in *history*.

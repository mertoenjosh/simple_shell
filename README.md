# C - Simple Shell

- A simple UNIX command interpreter.

## Authors

[Martin Thuo](https://www.twitter.com/mertoenjosh)

[Lavender Otieno](lavenderproductdesign@gmail.com)

### Objectives
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

COMPILATION
This shell is compiled using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

The Shell Name: X-METRO

X-METRO has both interactive mode and non-interactive mode. 

....................................................................................
....................................................................................

FEATURES
-Displays a prompt and waits for the user to type a command. A command line always ends with a new line.
-The prompt is displayed again each time a command has been executed.
-The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
-The command lines are made only of one word. No arguments will be passed to programs.
-If an executable cannot be found, prints an error message and display the prompt again.
-Handles errors.
-Handles the “end of file” condition (Ctrl+D)
-Handles command lines with arguments
-Handles the PATH
-Implements the exit built-in, that exits the shell
-Implements the env built-in, that prints the current environment
-Write your own getline function
-Uses a buffer to read many chars at once and call the least possible the read system call
-etc as seen in the files

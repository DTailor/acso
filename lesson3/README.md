Laboratory work 3
=========

Goal
-
  - **Provide the ability to load a task**.In the last labwork, you implemented a command prompt, you need to be able to execute commands in it. This means that when you type hello for example, you OS should execute the cmd_hello function.

Reaching the goal
-

1. We create a new directory in the working folder `mkdir cmd`
2. Next step was to update our **Makefile**.

`cmd.o:
gcc -m32  -ffreestanding -fno-builtin -nostdlib -c cmd/*.c`

Basically we told him, that there is a folder called **cmd**, and that he must look there for `*.c` type files.
3. Now we can add different tasks in our **cmd** directory, but stricly havin the structure `cmd_*.c`.
4. Created a simple  `void hello (void) ` function which outputs to the screen *hell*. 
5. This function can be easily used in **kmain.c** without the need to import the file.
6. So now, we addapt the **kmain.c** `main(void)` function this way. Whenever user types `'a'`, `hello()` function will be called.
7. Call `make` from consola
8. Mount `*.img` file and start.
  
    

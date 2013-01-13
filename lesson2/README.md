Laboratory work 2
=========

Goal
-
  - make the output to screen easy:
  - implement putc (print a character at the current cursor position and increase the position of the cursor)
  - implement puts (print a caracter at the current cursor position, and advance the position of the cursor with the length of the string)
  - implement clrscr (clear the screen)
  - create a command prompt which can read and parse commands, and will respond to all commands with "you typed: <command>"
  - implement gets (get a string from keyboard)
  - when a command is typed, the output should be written below the command and the prompt should be moved below the output.

Reaching the goal
-
*video.c*

  - Let's get started with video.c file. Here we had to add a global variable (int i) which represents our current position in **vidmem**. Also, there are several helping functions to make the input/output process real. A brief description of the functions coming up.
 
    -  `void setNewLine( )` - just sets up a new line, moving the i index.
    -  `int getIndex()` - returns back the value of i.
    -  `resetIndex()` - reseting the value of i to 0.
    -  `void putc (char c)` - outputs a single character to the screen.
    -  `void puts (char *c)` - outputs an array of characters to the screen.
    -  `void clrscr()` - clears all the screen.

*kmain.c*
  
 - Here we declared several variables.
 
    - `int i` - used as a counter.
    - `int stringSize` - to store the length of the string we input.
    -  `char input[160]` - at the moment we can work with a single line, so the length is se to be 160.
    - `int lineNr` - to store the index of curent line.

 - The working principle of the `main()` function is simple, we use an infinite loop, and wait for the user to input a character. Right after he does this, we run through a `switch()` where we check it the character is a `'d'`, we activate the `clrscr()` function, else if it was the `'/n'` (aka Enter button), then we output to the screen what the user enter to this point, or else we continue to wait for another input.




  
    

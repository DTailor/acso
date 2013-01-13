Laboratory work 5&6
=========

Goal
-
  - have a simple multitasking implemented
  - your OS multitasking should have the following functions available:
Reaching the goal
  
    - `void sched_add_task(void* func_ptr)` – add a task to scheduler by giving a function pointer
    - `void yield(void)` – give control to scheduler in a task
    - `void sched_run(void)` – start the scheduler

Reaching the goal
-

*setjmp.h*


  - I created anothet file in **/lib** directory called **setjmp.h**, where I copied the structure I user in LaboratoryWork4

The structure

    typedef struct
        {
        unsigned edi, esi, ebp, esp, ebx, edx, ecx, eax;
        unsigned eip, eflags;
        } jmp_buf[1];
        
plus declared 2 functions we are going to use 

    int setjmp(jmp_buf b);
    void longjmp(jmp_buf b, int ret_val);
    
*kmain.c*
  
- First we import **setjmp.h**, and **longjmp.c** 

        #include "lib/setjmp.h"
        #include "lib/longjmp.c"
- Right after this we define a variable called `TASK_STACK_SIZE` to be the `512`.
- Als

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
  - I created anothet file in **/lib** directory called **setjmp.h**, where I copied the structure I user in LaboratoryWork4

The structure

    typedef struct
        {
        unsigned edi, esi, ebp, esp, ebx, edx, ecx, eax;
        unsigned eip, eflags;
        } jmp_buf[1];

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
- Also we had to add 2 different structures in our file.
    
        typedef enum {
        TS_RUNNABLE = 1, TS_BLOCKED = 2, TS_ZOMBIE = 3
        } task_status_t;
 
        typedef struct {
            jmp_buf       state;
            task_status_t status;
            unsigned char stack[TASK_STACK_SIZE];
        } task_t;

  - Plus some global variables.
        
            task_t _sched_tasks[1];  // Tasks array, only 2 at the moment
            int task_added = 0;      // number of tasks we added
            int _sched_num_tasks = 0;// current working task

  -  First function to add was the `wait(void)` one. We need this function to make a "sleep" period between our tasks, so that we can see how they're switching between them.

            void wait (void) {
               int i=0;
               while ( i<99999999)
               {
                i++;
               };
            }

  - Next 2 functions are our tasks. They switch the letters on the screen between A/B.

            void task0 (void) {
              while (1) {
                yield();
                vidmem[0] = vidmem[0] == 'B' ? 'A' : 'B';
                wait();
              }
            }
            
            void task1 (void) {
            
              while (1) {
                yield();
                vidmem[2] = vidmem[2] == 'B' ? 'A' : 'B';
                wait();
              }
            }
            
    
            


## Threads
When one process has a large CPU requirement, it is broken into threads.  
Forking copies:
1. data
2. code
3. registers
4. stack  

Threading copies:
1. registers
2. stackS

| process | thread |
|---|---|
| system call is involed | no system call is involed |
| different processes are treated differently | all user level threads are one task |
| context switching is slower (since entire PCB is copied) | context switching is faster |
| all forked processes are independent | stopping one thread stops the process |


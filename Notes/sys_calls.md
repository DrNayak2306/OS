# Types
## 1. File related
open(), read(), write(), close(), etc..
## 2. Device related
read, write, reposition, ioctl, etc..
## 3. Information
get pid, attributes, system time and date
## 4. Process control
load, execute, abort, fork, wait, signal, allocate, etc..
## 5. Communication
pipe(), create/delete connections, shmget()
## 6. Security
chmod, umask, etc..


User mode is in bit 1.  
Kernel mode is in bit 0.  
An interrupt generates a __trap__ which switches mode bit.

### process --> gets system cell --> trap (mode = 0) --> execute system call --> trap (mode = 1) --> process
# Important Linux commands
## chmod
Each file can have read(r),write(w),execute(x) priveleges for user(u), group(g), other(o).  
First field is for file type.  
Ex: -rwxrw-rw- means r,w,x for u; r,w for g; r,w for o for a regular file.
## `chmod ugo+rw file` in octal
rw-rw-rw-  
110110110  
666  
`chmod 666 file`
## Important system calls
`lseek`  
`read`  
`write`  
`fork`
## Question
file has content "1234567890abcd"  
What is the position of pointer after - 

`lseek(n, 10, SEEK_CUR); lseek(n, 5, SEEK_SET);` n - file descriptor  

## Answer  
5

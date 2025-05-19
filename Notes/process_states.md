# [Process states](https://github.com/DrNayak2306/OS/blob/main/process_states.png)

## Normal execution
new --long term schedule--> ready --short term schedule--> running--deallocate--> terminated 

## if I/O interrupt
running --interrupt--> wait/block --> ready

## if preemption
running --> ready 

## if no space in wait / block
wait --medium term schedule--> suspend wait

## if no space in ready
ready --medium term schedule--> suspend ready

## if no space in wait / block even after suspended wait
suspend wait --> suspend ready

## 1. New
Process resident in disk.

## 2. Ready
Process moved to RAM.

## 3. Running
Process present in CPU.

## 4. Terminate
Process finished.

## 5. Wait / Block
Process waits for I/O in RAM.

## 6. Suspend wait
If RAM is full for wait, then process is swapped to disk.

## 7. Suspend ready
If RAM is full for ready, then process is swapped to disk."
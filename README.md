# GETMAC
Gets the mac of your own machine.

> [!NOTE]: 
> This func works on win and on linux, 
> However on windows it uses an other name.
> This is due to the original windows getmac. Because there is already one.
> You may find it useful to rename it as you like to...!

## Compile it yourself

### LINUX

```bash
gcc -Wall -Wextra -Wpedantic -Werror -O2 -std=c99 src/* -o bin/getmac
```

### Compile WIN on LINUX

```bash
x86_64-w64-mingw32-gcc -O2 src/main.c -o bin/WRAPPERgetmac.exe
```

### WINDOWS

```cmd
gcc -Wall -Wextra -Wpedantic -Werror -O2 -std=c99 .\src\main.c -o bin\WRAPPERgetmac.exe
```

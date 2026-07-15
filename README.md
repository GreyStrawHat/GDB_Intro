# GDB Intro

This is a repository for an intro presentation on GDB and it's popular plugins GEF and PWNDBG

## GDB (GNU debugger)

GDB is an industry standard debugging tool that comes with most flavors of linux. It is an extremely robust and helpful tool that every developer should familiarize themselves with and have in their toolbelt. It is incredibly powerful but notorious for its stark, text-only interface that requires you to manually type commands to see vitually anything. With GDB you don't need to know how to do everything, only what you need for the scope of the task.

## GEF (GDB Enhanced Features)

GEF is a python based plugin extension of GDB that adds visualization tools like context sections that showcases all kinds of data such as memory, addresses and additional helper markers like the arguments for a function thats about to be called.

### GEF Context Section

GEF's context section can be extremely helpful but also overwhelming, especially at first. When starting out, it's best to remove most the sections you won't be using and instead opt for simpler sections like "code source stack".


## GDB/GEF Cheatsheet

Remember that in a debugger, you have full control over a program. Take advantage of this control and use the options available to you and maximize the value this dynamic analysis offers you.

### Quick Start Guide

Run program

```gdb-gef
gef> run

or 

gef> run <arg_1> <arg_2> etc..
```

Set a breakpoint (Remember to include an asterisk where appropriate)

```gdb-gef
gef> break *<memory_address>

or 

gef> break <symbol_name>

or break *<symbol_name> + <int>
```

Continue Program Execution

```gdb-gef
gef> continue
```

Execute Next Instruction (Step Over Function Call)

```gdb-gef
gef> nexti

or 

gef> nexti <num of instructions>
```

Execution Next Instruction (Step Into Function Call)

```gdb-gef
gef> stepi

or 

gef> stepi <num of instructions>
```

Finish Execution Of Current Function

```gdb-gef
gef> finish
```

### Examining and Modifying Memory

```gdb-gef
For more information use 'gef> help x'
Syntax for examining memory is as follows

Examine command => x

Followed by a forward slash => /

Number of Elements to Examine => n

Format of Each Element => (o,x,d,u,t,f,a,i,c,s,z)

Size of Each Element => (b,h,w,g)

Example:
gef> x/4ob 0xffffffff

or 

gef> x/4ob <variable>

or 

gef> x/4ob <symbol_name>
```

To Modify Memory in an address space, use the set command and typecast the size of the area you want to modify

```gdb-gef
gef> set *(pointer_size *) <memory_address> = <new_value>

Example:
gef> set *(int *)0x7fffffffff = 4

or 

gef> set *(long long *)0x7ffffffff = 876543456
```

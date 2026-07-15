# GDB Intro

This is a repository for an intro presentation on GDB and it's popular plugins GEF and PWNDBG

## GDB (GNU debugger)

GDB is an industry standard debugging tool that comes with most flavors of linux. It is an extremely robust and helpful tool that every developer should familiarize themselves with and have in their toolbelt. It is incredibly powerful but notorious for its stark, text-only interface that requires you to manually type commands to see vitually anything. With GDB you don't need to know how to do everything, only what you need for the scope of the task.

## GEF (GDB Enhanced Features)

GEF is a python based plugin extension of GDB that adds visualization tools like context sections that showcases all kinds of data such as memory, addresses and additional helper markers like the arguments for a function thats about to be called.

### GEF Context Section

GEF's context section can be extremely helpful but also overwhelming, especially at first. When starting out, it's best to remove most the sections you won't be using and instead opt for simpler sections like "code source stack".

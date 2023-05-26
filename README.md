0x19. C - Stacks, Queues - LIFO, FIFO

At the end of this project we should know the following:
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables

The project Requires us to perform the following tasks:
0. push, pall[Implement the push and pall opcodes]
1. pint [Implement the pint opcode]
2. pop [Implement the pop opcode]
3. swap [Implement the swap opcode]
4. add [Implement the add opcode]
5. nop [Implement the nop opcode]

The Monty language:
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files:

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$


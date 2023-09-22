

# Monty Interpreter

This is a simple interpreter for Monty Bytecode files written in C. It can read a Monty Bytecode file, interpret its instructions and execute them.

## 0x19. C - Stacks, Queues - LIFO, FIFO

## Project Structure

`monty:` the compiled executable file.

`monty.h:` the header file containing function prototypes, definitions and struct declarations.

`execute.c:` the file containing the execute_opcode() function that determines the opcode to be executed.

`main.c:` the file containing the main() function that reads the bytecode file and executes the opcodes.

`operations:` these are files containing the functions for each opcode (push(), pint(), pop(), swap(), add(), nop()).

`stack.c:` the file containing the stack functions (stack_len(), push_stack(), pop_stack(), free_stack()).

`bytecodes:` a folder containing the bytecode files to be executed by the monty program.


### Installation

To install and run the Monty Interpreter, follow these steps:

- Clone this repository: `git clone https://github.com/nanakwamefamous/monty`

- Change into the monty directory: `cd monty`

- Compile the interpreter: `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

- Run the interpreter: `./monty <filename>.m`
  - Replace `<filename>` with the name of the file containing the Monty code to execute.

### Usage

The Monty Interpreter takes a single argument, which is the path to a Monty Bytecode file. The file should contain instructions for the interpreter to execute, one per line.

### Supported Opcodes

The following opcodes are supported by the interpreter:

- `push:` pushes an integer onto the stack

- `pop:`  removes the top element of the stack

- `swap:` swaps the top two elements of the stack

- `add:`  adds the top two elements of the stack.

- `sub:`  subtracts the top element of the stack from the second top element.

- `div:`  divides the second top element of the stack by the top element.

- `mul:`  multiplies the second top element of the stack with the top element.

- `mod:`  computes the modulus of the second top element of the stack with the top element of the stack.

- `pall:` prints all the values on the stack

- `pint:` prints the value at the top of the stack

- `pchar:` prints the character at the top of the stack

- `pstr:`  prints the string starting at the top of the stack

- `nop:`  does nothing.


## AUTHOR(s)

This program was written by `nanakwamefamous` & `tonyarthur1991`. 




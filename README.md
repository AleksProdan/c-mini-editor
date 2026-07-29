# c-mini-editor

Work-in-progress nano-like CLI text editor in C (file I/O, terminal control, editing)

## Overview

This project is a learning-focused implementation of a minimal CLI text editor written in C, inspired by tools like `nano`.

The goal is to understand low-level Linux programming concepts such as:

* File I/O using system calls (`open`, `read`, `write`, `close`)
* Memory management
* Terminal handling
* Interactive input processing

## Current Features

* Open and read a file
* Read file content using low-level system calls
* Output file content to the terminal

## Example

```bash
gcc -Wall -Wextra minieditor.c -o minieditor
./minieditor test.txt
```

## Roadmap

### Phase 1 – File I/O (Fundamentals)

* [x] Open file using `open()`
* [x] Read file using `read()`
* [x] Output file content using `write()`
* [x] Accept filename via CLI arguments (`argv`)

---

### Phase 2 – Memory Handling

* [x] Get file size with `stat()`
* [x] Allocate dynamic heap buffer
* [x] Load entire file into memory
* [x] Null-terminate file buffer
* [x] Manage memory with `malloc()` and `free()`

---

### Phase 3 – Editable Buffer System

* [x] Track buffer length
* [x] Track buffer capacity
* [ ] Resize buffer dynamically with `realloc()`
* [ ] Append text to buffer
* [ ] Modify in-memory text
* [ ] Prepare buffer for insert/delete operations

---

### Phase 4 – Input Handling

* [ ] Coming soon...

## Project Status

Early development stage. Actively being expanded step by step.

## Author

Aleks

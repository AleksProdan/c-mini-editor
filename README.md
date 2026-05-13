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

* Open and read a file (currently hardcoded filename)
* Read file content using low-level system calls
* Output file content to the terminal

## Example

```bash
gcc minieditor.c -o minieditor
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

* [ ] Load entire file into memory
* [ ] Dynamically resize buffer (`malloc`, `realloc`)
* [ ] Store file as editable structure

---

### Phase 3 – Terminal Control

* [ ] Switch terminal to raw mode
* [ ] Disable canonical input & echo
* [ ] Read single key presses

---

### Phase 4 – Input Handling

* [ ] Capture user input
* [ ] Handle basic keys (letters, backspace, enter)
* [ ] Implement simple input loop

---

### Phase 5 – Screen Rendering

* [ ] Clear and redraw screen
* [ ] Render file content from memory
* [ ] Implement basic refresh system

---

### Phase 6 – Cursor Control

* [ ] Track cursor position (x, y)
* [ ] Move cursor with arrow keys
* [ ] Handle boundaries (start/end of line)

---

### Phase 7 – Text Editing

* [ ] Insert characters
* [ ] Delete characters (backspace)
* [ ] Handle new lines
* [ ] Update buffer accordingly

---

### Phase 8 – File Saving

* [ ] Save file using `write()`
* [ ] Overwrite existing file
* [ ] Create new file if it doesn't exist

---

### Phase 9 – Commands

* [ ] Quit editor (e.g. Ctrl+Q)
* [ ] Save command (e.g. Ctrl+S)
* [ ] Status bar / feedback

---

### Phase 10 – Polishing

* [ ] Improve performance
* [ ] Handle edge cases
* [ ] Refactor code structure
* [ ] Add comments and documentation

## Project Status

Early development stage. Actively being expanded step by step.

## Author

Aleks

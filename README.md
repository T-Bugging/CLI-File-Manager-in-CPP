# **CLI File Manager in C++**

A lightweight Command Line Interface (CLI) File Manager implemented in C++ using basic Data Structures and Algorithms (DSA) concepts. This project simulates basic file management operations similar to a Unix/Linux shell.

## **Features**

**help** — Displays a list of available commands

**mkdir** — Create a new directory

**rmdir** — Remove an existing directory

**ls** — List contents of the current directory

**cd** — Change the current directory

**pwd** — Print the current working directory

**touch** — Create a new file

**rm** — Delete a file

**exit** — Exit the file manager

## **Implementation Details**

**Language & Tools:** C++ compiled with MinGW (g++ version 6.3.0)

**Headers Used:**  

- and for basic input/output  
- `<dirent.h>` to list and navigate directories  
- `<direct.h>` for Windows-based directory creation and navigation  

**Directory and file names:** Accepted using `cin >>` (only supports single-word names)

**Core Logic:** Command pattern implemented via string comparisons and if-else blocks.

**Error Handling:** Each command checks for validity (e.g., if a file/directory exists before creation/deletion).

## **How to Compile and Run**

**Compile**  

```bash
g++ -o filemanager filemanager.cpp



# **CLI File Manager in C++**

A lightweight Command Line Interface (CLI) File Manager implemented in C++ using basic Data Structures and Algorithms (DSA) concepts. This project simulates basic file management operations similar to a Unix/Linux shell.

## **Features**

`help` — Displays a list of available commands

`mkdir` — Create a new directory

`rmdir` — Remove an existing directory

`ls` — List contents of the current directory

`cd` — Change the current directory

`pwd` — Print the current working directory

`touch` — Create a new file

`rm` — Delete a file

`exit` — Exit the file manager

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
```

**Run**  
```bash
./filemanager
```

## **Known Issues & Limitations**

- Does not support editing file contents.  
- Does not support file or folder names with spaces (use underscore _ or camelCase instead).  
- Requires MinGW or a Windows-compatible compiler as it uses `<direct.h>`.  
- No persistent metadata; it only uses the actual file system.  

## **Development Challenges**

- Couldn't use due to g++ 6.3.0 lacking support.  
- Needed to handle C-style strings (char*) due to direct.h/dirent.h functions.  
- Addressed output bugs like duplicated prompt messages.  
- Decided to use actual directories instead of simulating them via arrays to keep the project realistic and professional.  

## **Project Structure**

All files and folders are created and managed in the current working directory of the executable. Changing directory (`cd`) updates the base path for all other commands like `ls`, `touch`, `rm`, etc.

## **Author**

Uday — Final year Computer Science student, passionate about systems programming and building practical tools.

This project was built to demonstrate core C++ skills, use of file system operations, and command-driven design using simple logic. Ideal for beginner-level C++ systems projects.

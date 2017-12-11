C++ School Project Start Kit
---
A starter template with code formatter, debugger, tasks, launch file, makefile, all setup, for **boring, contrived academic C++ software projects**.

# Recommended VS Code Extensions
- [C/C++ by Microsoft](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- [EditorConfig for VS Code](https://marketplace.visualstudio.com/items?itemName=EditorConfig.EditorConfig)

# Prerequisites
- gcc 6 and g++ 6
  - It's not a hard requirement, but if you use a different version, make sure you change the include paths in `.vscode/c_cpp_properties.json`
```
sudo apt install gcc-6 g++-6 libstdc++-6-dev
```
- xterm
- gdb
- build-essential package
```
sudo apt install build-essential
```

# Tasks
- build-debug
  - This builds a binary with gdb debugging symbols
- build-release
  - This builds the release binary

# Launch file
- It builds the debug binary (`make debug --always-make`), runs the program, attaches gdb to it.
- Insert some breakpoints and simply press `F5` in VS Code to start debugging

# Other scripts
- `make-submission.sh` tars and zips all the source files. Use it to make the submission zip.

# Test EECS languages
A repository to test what happens when you do something in the standard that your EECS class decided to use. Each folder has a generalized Makefile from that class and a test.c/test.cpp to write your test in.

This repository was made for WSL Arch, though it should work on other WSL/Linux systems.

## Quick Start
1. Define your uniqname in the `.env` file if you want to sync to CAEN *(optional)*
2. Go to the folder for the class of your choice.
3. Edit the `test.c`/`test.cpp` file.
4. Run `make test` or `make`.
5. Run `./test`

## Syncing to CAEN
Each Makefile also has a command to sync to CAEN. For EECS 281, this is `make sync2caen`, and for other classes I made the rule `make sync`. These all rely on the `.env` file in the top level directory, which defines the `UNIQNAME` environment variable. Before you use these commands, change the uniqname to be your own.

Although I have put the `.env` file in the `.gitignore`, git may try to track it anyway. To tell git to stop, use the following command:
```bash
git update-index --skip-worktree .env
```

The default directory for syncing to CAEN is `/test/[classname]`. If this directory does not exist, the command might get angry, so make sure you define these folders, or change the path name in the Makefile if you want.

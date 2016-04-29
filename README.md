# MiniContest

Minimal repository for easy compilation and testing with contest-style input and output.

Run `make` in the *contest* directory to test all tasks, or `make test_taskname` to test a specific task.

## Structure of contest directory

There are three files expected for each task:
* *taskname.cpp* - source code which solves the problem
* *test_taskname_in* - contains test input
* *test_taskname_out* - contains target output

## Configure diff output

Edit the first line of the *Makefile* to change diff output options.
Try `-y` for a side-by-side view, if you are unfamiliar with the default diff output.
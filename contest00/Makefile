diffoptions=-Z -U 2
### cheat sheet diff options:
# -y        side-by-side (whole file)
# -U NUM    show NUM lines of context
# -Z        ignore trailing whitespace

# detect tasks based on test input files
INPUTS := $(wildcard test_*_in)
# remove _in suffix
TASKS := $(INPUTS:_in=)

all: $(TASKS)

test_%: %.out test_%_in test_%_out
	@cat $@_in | ./$< | diff $(diffoptions) $@_out -
	@echo "$@: success!"

%.out: %.cpp
	g++ $< -o $@ -O2 -std=c++11 -Wall

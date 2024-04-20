BUILDDIR=./build
BINARY=$(BUILDDIR)/cf-cpp
DEBUGBINARY=$(BUILDDIR)/cf-cpp-debug

all: $(BINARY)

$(BINARY): main.cpp
	@mkdir -p $(BUILDDIR)
	@g++ -o $(BINARY) main.cpp


clean:
	rm -rf $(BUILDDIR)

run: all
	@$(BINARY)

test: all
	@$(BINARY) < input.txt

debug:
	@mkdir -p $(BUILDDIR)
	@g++ -g -o $(DEBUGBINARY) main.cpp
	@gdb $(DEBUGBINARY)

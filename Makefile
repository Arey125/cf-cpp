BUILDDIR=./build
BINARY=$(BUILDDIR)/cf-cpp

all: $(BINARY)

$(BINARY): main.cpp
	@mkdir -p $(BUILDDIR)
	@g++ -o $(BINARY) main.cpp


clean:
	rm -rf $(BUILDDIR)

run: all
	@./$(BINARY)

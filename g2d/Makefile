TARGET := g2d_hello
PREFIX ?= /usr

CC ?= gcc
CFLAGS += -DG2D_OPENCL=1
LDFLAGS +=  -lg2d

OBJECTS += \
	helloworld.o

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDFLAGS)

.PHONY: install
install: $(TARGET)
	mkdir -p $(DESTDIR)/opt/g2d/
	cp $< $(DESTDIR)/opt/g2d/$(TARGET)

.PHONY: uninstall
uninstall:
	rm -f $(DESTDIR)/opt/g2d/$(TARGET)

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(OBJECTS:.o=.d) $(TARGET)
rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))
JAVA = $(call rwildcard,./,*.java)

CSRC = $(call rwildcard,./,*.c)
OBJS = $(patsubst %.c, %.o, $(CSRC))

CFLAGS = -I../jni -I../jni/linux -Iinclude -Wno-deprecated-declarations
CC = clang

gq/glowman554/Main.class: $(JAVA)
	javac -verbose -h include $(JAVA)

libc.so: $(OBJS)
	$(CC) $(CFLAGS) -shared -Wl $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

jar: gq/glowman554/Main.class libc.so
	find . -type f -name "*.class" > classes.txt
	jar cfe libc.jar gq.glowman554.Main libc.so @classes.txt

run: jar
	java -jar libc.jar

#include <gq_glowman554_libc_stdio_Stdio.h>

#include <stdio.h>

JNIEXPORT void JNICALL Java_gq_glowman554_libc_stdio_Stdio_puts(JNIEnv* env, jclass clazz, jlong ptr) {
	puts((char*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_stdio_Stdio_putchar(JNIEnv* env, jclass clazz, jbyte c) {
	putchar(c);
}
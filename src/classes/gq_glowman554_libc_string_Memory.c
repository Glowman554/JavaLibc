#include <gq_glowman554_libc_string_Memory.h>

#include <string.h>

JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_Memory_memcpy(JNIEnv* env, jclass clazz, jlong dest, jlong src, jint sz) {
	memcpy((void*) dest, (void*) src, sz);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_Memory_memset(JNIEnv* env, jclass clazz, jlong dest, jbyte i, jint sz) {
	memset((void*) dest, i, sz);
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_string_Memory_memcmp(JNIEnv* env, jclass clazz, jlong a, jlong b, jint sz) {
	return memcmp((void*) a, (void*) b, sz);
}
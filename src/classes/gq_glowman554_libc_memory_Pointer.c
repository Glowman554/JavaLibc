#include <gq_glowman554_libc_memory_Pointer.h>

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

JNIEXPORT jbyte JNICALL Java_gq_glowman554_libc_memory_Pointer_read_18(JNIEnv* env, jclass clazz, jlong ptr) {
	return (jbyte) *((uint8_t*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_memory_Pointer_write_18(JNIEnv* env, jclass clazz, jlong ptr, jbyte val) {
	*((uint8_t*) ptr) = val;
}

JNIEXPORT jchar JNICALL Java_gq_glowman554_libc_memory_Pointer_read_116(JNIEnv* env, jclass clazz, jlong ptr) {
	return (jchar) *((uint16_t*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_memory_Pointer_write_116(JNIEnv* env, jclass clazz, jlong ptr, jchar val) {
	*((uint16_t*) ptr) = val;
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_memory_Pointer_read_132(JNIEnv* env, jclass clazz, jlong ptr) {
	return (jint) *((uint32_t*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_memory_Pointer_write_132(JNIEnv* env, jclass clazz, jlong ptr, jint val) {
	*((uint32_t*) ptr) = val;
}

JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_memory_Pointer_read_164(JNIEnv* env, jclass clazz, jlong ptr) {
	return (jlong) *((uint32_t*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_memory_Pointer_write_164(JNIEnv* env, jclass clazz, jlong ptr, jlong val) {
	*((uint64_t*) ptr) = val;
}


JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_memory_Pointer_malloc(JNIEnv* env, jclass clazz, jint size) {
	return (jlong) malloc(size);
}


JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_memory_Pointer_realloc(JNIEnv* env, jclass clazz, jlong ptr, jint newsz) {
	return (jlong) realloc((void*) ptr, newsz);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_memory_Pointer_free(JNIEnv* env, jclass clazz, jlong ptr) {
#ifdef DEBUG
	printf("Freeing %llx...\n", ptr);
#endif
	free((void*) ptr);
}

JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_memory_Pointer_index(JNIEnv* env, jclass clazz, jlong ptr, jint sz, jint el) {
	uint64_t p = (uint64_t) ptr;

	return (jlong) (p + (sz * el));
}
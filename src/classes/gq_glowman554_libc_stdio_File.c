#include <gq_glowman554_libc_stdio_File.h>

#include <stdio.h>

JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_stdio_File_fopen(JNIEnv* env, jclass clazz, jlong name, jlong mode) {
	return (jlong) fopen((char*) name, (char*) mode);
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_stdio_File_fclose(JNIEnv* env, jclass clazz, jlong ptr) {
#ifdef DEBUG
	printf("Closing %llx...\n", ptr);
#endif
	return fclose((FILE*) ptr);
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_stdio_File_fwrite(JNIEnv* env, jclass clazz, jlong data_ptr, jint element_size, jint num_elements, jlong file_ptr) {
	return fwrite((void*) data_ptr, element_size, num_elements, (FILE*) file_ptr);
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_stdio_File_fread(JNIEnv* env, jclass clazz, jlong data_ptr, jint element_size, jint num_elements, jlong file_ptr) {
	return fread((void*) data_ptr, element_size, num_elements, (FILE*) file_ptr);
}

JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_stdio_File_ftell(JNIEnv* env, jclass clazz, jlong ptr) {
	return ftell((FILE*) ptr);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_stdio_File_fseek(JNIEnv* env, jclass clazz, jlong ptr, jlong offset, jint whence) {
	fseek((FILE*) ptr, offset, whence);
}
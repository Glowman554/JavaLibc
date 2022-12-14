#include <gq_glowman554_libc_string_CString.h>

#include <stdlib.h>
#include <string.h>

JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_string_CString_c_1str__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring str) {
	const char* c_str = (*env)->GetStringUTFChars(env, str, NULL);
	char* dest = malloc(strlen(c_str) + 1);
	strcpy((char*) dest, c_str);
	(*env)->ReleaseStringUTFChars(env, str, c_str);

	return (jlong) dest;
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_c_1str__JLjava_lang_String_2(JNIEnv* env, jclass clazz, jlong dest, jobject str) {
	const char* c_str = (*env)->GetStringUTFChars(env, str, NULL);
	strcpy((char*) dest, c_str);
	(*env)->ReleaseStringUTFChars(env, str, c_str);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_strcat(JNIEnv* env, jclass clazz, jlong a, jlong b) {
	strcat((char*) a, (char*) b);
}

JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_strcpy(JNIEnv* env, jclass clazz, jlong dest, jlong src) {
	strcpy((char*) dest, (char*) src);
}

JNIEXPORT jint JNICALL Java_gq_glowman554_libc_string_CString_strlen(JNIEnv* env, jclass clazz, jlong ptr) {
	return strlen((char*) ptr);
}
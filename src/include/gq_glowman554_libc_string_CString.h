/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gq_glowman554_libc_string_CString */

#ifndef _Included_gq_glowman554_libc_string_CString
#define _Included_gq_glowman554_libc_string_CString
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gq_glowman554_libc_string_CString
 * Method:    c_str
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_gq_glowman554_libc_string_CString_c_1str__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gq_glowman554_libc_string_CString
 * Method:    c_str
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_c_1str__JLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     gq_glowman554_libc_string_CString
 * Method:    strcat
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_strcat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     gq_glowman554_libc_string_CString
 * Method:    strcpy
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_gq_glowman554_libc_string_CString_strcpy
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     gq_glowman554_libc_string_CString
 * Method:    strlen
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_gq_glowman554_libc_string_CString_strlen
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
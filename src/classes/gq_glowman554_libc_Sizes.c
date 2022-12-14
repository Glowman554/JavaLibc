#include <gq_glowman554_libc_Sizes.h>

#include <assert.h>
#include <stdint.h>

JNIEXPORT void JNICALL Java_gq_glowman554_libc_Sizes_checkSizes(JNIEnv* env, jclass clazz) {
	assert(sizeof(jbyte) == sizeof(uint8_t));
	assert(sizeof(jchar) == sizeof(uint16_t));
	assert(sizeof(jint) == sizeof(uint32_t));
	assert(sizeof(jlong) == sizeof(uint64_t));
}
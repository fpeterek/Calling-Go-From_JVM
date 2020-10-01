#ifndef KT_INTERFACE_H
#define KT_INTERFACE_H

#include <jni.h>

#include "gotest.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_org_fpeterek_jnitest_MainKt_helloWorld(JNIEnv * env, jobject obj);
JNIEXPORT jint JNICALL Java_org_fpeterek_jnitest_MainKt_strlen(JNIEnv * env, jobject obj, jstring str);
JNIEXPORT jstring JNICALL Java_org_fpeterek_jnitest_MainKt_getAaa(JNIEnv * env, jobject obj, jint len);

#ifdef __cplusplus
}
#endif

#endif

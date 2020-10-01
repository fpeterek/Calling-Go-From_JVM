#include <iso646.h>

#include "ktinterface.h"

#include "test.h"

JNIEXPORT void JNICALL Java_org_fpeterek_jnitest_MainKt_helloWorld(JNIEnv * env, jobject obj) {
    hello_world();
}

JNIEXPORT jint JNICALL Java_org_fpeterek_jnitest_MainKt_strlen(JNIEnv * env, jobject obj, jstring str) {

    const char * const cstr = (*env)->GetStringUTFChars(env, str, 0);

    if (not cstr) {
        return 0;
    }

    const int len = str_len(cstr);

    (*env)->ReleaseStringUTFChars(env, str, cstr);

    return len;

}


JNIEXPORT jstring JNICALL Java_org_fpeterek_jnitest_MainKt_getAaa(JNIEnv * env, jobject obj, jint len) {
    char * str = get_aaa(len);
    return (*env)->NewStringUTF(env, str);
}


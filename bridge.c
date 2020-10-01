#include "bridge.h"
#include "ktinterface.h"
#include "gotest.h"


JNIEXPORT void JNICALL Java_org_fpeterek_jnitest_Bridge_helloWorld(JNIEnv * env, jobject obj) {
    return Java_org_fpeterek_jnitest_MainKt_helloWorld(env, obj);   
}

JNIEXPORT jint JNICALL Java_org_fpeterek_jnitest_Bridge_strlen(JNIEnv * env, jobject obj, jstring str) {
    return Java_org_fpeterek_jnitest_MainKt_strlen(env, obj, str);
}
            
JNIEXPORT jstring JNICALL Java_org_fpeterek_jnitest_Bridge_getAaa(JNIEnv * env, jobject obj, jint len) {
    return Java_org_fpeterek_jnitest_MainKt_getAaa(env, obj, len);
}

JNIEXPORT void JNICALL Java_org_fpeterek_jnitest_Bridge_goTest(JNIEnv * env, jobject obj) {
    call_go();
}


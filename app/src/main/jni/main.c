/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_ruipandong_jnistudy_NativeJNI */

#ifndef _Included_com_example_ruipandong_jnistudy_NativeJNI
#define _Included_com_example_ruipandong_jnistudy_NativeJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_ruipandong_jnistudy_NativeJNI
 * Method:    helloJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ruipandong_jnistudy_NativeJNI_helloJNI
  (JNIEnv *env, jclass jclass1){
    return (*env)->NewStringUTF(env, "Hello from JNI!");
}

#ifdef __cplusplus
}
#endif
#endif

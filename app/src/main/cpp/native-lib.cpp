#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_llj_jnidemo_MainActivity_stringDemo(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "例会大傻逼";
    return env->NewStringUTF(hello.c_str());
}

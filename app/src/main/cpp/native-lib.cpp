#include <jni.h>
#include <string>
#include <android/log.h>
#define TAG "MY LOG"
#define  LOGV(...)  __android_log_print(ANDROID_LOG_VERBOSE,    TAG, __VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,       TAG, __VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,      TAG, __VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,       TAG, __VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,      TAG, __VA_ARGS__)

extern "C" JNIEXPORT jstring JNICALL
Java_com_ramadan_nativecpp_Store_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello NDK";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_ramadan_nativecpp_Store_getCount(
        JNIEnv* env,
        jobject /* this */) {
//    env = 0;
//    return env->CallIntMethod(0, 0);
    return 0;
}

extern "C" JNIEXPORT jint JNICALL
Java_com_ramadan_nativecpp_Store_nativeAddition(
        JNIEnv* env,
        jobject , jint pa, jint pb) {
    return pa+pb;
}

extern "C" JNIEXPORT jint JNICALL
Java_com_ramadan_nativecpp_Store_nativeMultiplication(
        JNIEnv* env,
        jobject , jint pa, jint pb) {
    LOGI("The value of x is %d", pa);
    return pa+pb;
}



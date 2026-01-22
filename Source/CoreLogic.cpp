#include <jni.h>
#include <string>
#include <android/log.h>
#include <fstream>
#include <unistd.h>

// تعريف اسم التطبيق في السجلات
#define TAG "WarriorAscension"

// دالة مختصرة للطباعة داخل الأندرويد بدلاً من cout
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)

extern "C" {

// هذه هي "نقطة البداية" الحقيقية في تطبيقات الأندرويد C++
// بدلاً من int main()
JNIEXPORT jstring JNICALL
Java_com_warrior_ascension_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {

    // 1. عرض اللوجو (في الـ Logcat)
    LOGI("  ------------------------------------");
    LOGI("  |        WARRIOR'S ASCENSION       |");
    LOGI("  |    Developed by: Ibrahim ali     |");
    LOGI("  ------------------------------------");

    // 2. محاكاة التحميل
    LOGI("[SYSTEM] Loading World for Ibrahim Ali...");
    // sleep(1); // تم تعطيلها لتسريع التطبيق

    // 3. منطق اللعبة
    int finalGold = 7500;
    std::string finalRank = "King of Warriors";

    // 4. رسالة النجاح
    LOGI("[SUCCESS] Developer Verified: Ibrahim ali");
    LOGI("[FINAL] Game Ready to Launch!");

    // إرجاع نص للجافا ليتم عرضه على شاشة الموبايل
    std::string welcomeMessage = "Welcome, King of Warriors (Ibrahim Ali)\nGold: " + std::to_string(finalGold);
    return env->NewStringUTF(welcomeMessage.c_str());
}

}

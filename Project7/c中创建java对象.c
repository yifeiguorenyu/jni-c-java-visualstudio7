#include "ndk1_Simple6.h"

JNIEXPORT jobject JNICALL Java_ndk1_Simple6_createPoint
(JNIEnv *env, jclass clazz){
	
	//c中获取java的类 构建point的class 
	jclass pointclazz = (*env)->FindClass(env, "model/Point");
	//c中获取java的类 获取构造函数的id
	jmethodID methodId = (*env)->GetMethodID(env, pointclazz, "<init>", "(II)V");
	//c中创建一个对象
	jobject  point=(*env)->NewObject(env, pointclazz, methodId,11,45);
	return point;
}
#include "ndk1_Simple6.h"

JNIEXPORT jobject JNICALL Java_ndk1_Simple6_createPoint
(JNIEnv *env, jclass clazz){
	
	//c�л�ȡjava���� ����point��class 
	jclass pointclazz = (*env)->FindClass(env, "model/Point");
	//c�л�ȡjava���� ��ȡ���캯����id
	jmethodID methodId = (*env)->GetMethodID(env, pointclazz, "<init>", "(II)V");
	//c�д���һ������
	jobject  point=(*env)->NewObject(env, pointclazz, methodId,11,45);
	return point;
}
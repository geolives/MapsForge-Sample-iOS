//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/SoftReference.java
//

#ifndef _JavaLangRefSoftReference_H_
#define _JavaLangRefSoftReference_H_

#include "J2ObjC_header.h"
#include "java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

@interface JavaLangRefSoftReference : JavaLangRefReference {
 @public
  jboolean queued_;
}

#pragma mark Public

- (instancetype)initWithId:(id)r;

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefSoftReference)

FOUNDATION_EXPORT void JavaLangRefSoftReference_initWithId_(JavaLangRefSoftReference *self, id r);

FOUNDATION_EXPORT JavaLangRefSoftReference *new_JavaLangRefSoftReference_initWithId_(id r) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangRefSoftReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefSoftReference *self, id r, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefSoftReference *new_JavaLangRefSoftReference_initWithId_withJavaLangRefReferenceQueue_(id r, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefSoftReference)

#endif // _JavaLangRefSoftReference_H_
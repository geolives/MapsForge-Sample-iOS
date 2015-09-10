//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/FloatBuffer.java
//

#ifndef _JavaNioFloatBuffer_H_
#define _JavaNioFloatBuffer_H_

#include "J2ObjC_header.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@class IOSFloatArray;
@class JavaNioByteOrder;

@interface JavaNioFloatBuffer : JavaNioBuffer < JavaLangComparable >

#pragma mark Public

+ (JavaNioFloatBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

- (IOSFloatArray *)array;

- (jint)arrayOffset;

- (JavaNioFloatBuffer *)asReadOnlyBuffer;

- (JavaNioFloatBuffer *)compact;

- (jint)compareToWithId:(JavaNioFloatBuffer *)otherBuffer;

- (JavaNioFloatBuffer *)duplicate;

- (jboolean)isEqual:(id)other;

- (jfloat)get;

- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst;

- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)floatCount;

- (jfloat)getWithInt:(jint)index;

- (jboolean)hasArray;

- (NSUInteger)hash;

- (jboolean)isDirect;

- (JavaNioByteOrder *)order;

- (JavaNioFloatBuffer *)putWithFloat:(jfloat)f;

- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src;

- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)floatCount;

- (JavaNioFloatBuffer *)putWithJavaNioFloatBuffer:(JavaNioFloatBuffer *)src;

- (JavaNioFloatBuffer *)putWithInt:(jint)index
                         withFloat:(jfloat)f;

- (JavaNioFloatBuffer *)slice;

+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array;

+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array
                                   withInt:(jint)start
                                   withInt:(jint)floatCount;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (IOSFloatArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFloatBuffer)

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_wrapWithFloatArray_(IOSFloatArray *array);

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_wrapWithFloatArray_withInt_withInt_(IOSFloatArray *array, jint start, jint floatCount);

FOUNDATION_EXPORT void JavaNioFloatBuffer_initWithInt_withLong_(JavaNioFloatBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFloatBuffer)

#endif // _JavaNioFloatBuffer_H_
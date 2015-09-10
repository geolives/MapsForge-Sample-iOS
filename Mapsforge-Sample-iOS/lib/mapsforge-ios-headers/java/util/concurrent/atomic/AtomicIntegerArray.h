//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicIntegerArray.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicIntegerArray_H_
#define _JavaUtilConcurrentAtomicAtomicIntegerArray_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSIntArray;

@interface JavaUtilConcurrentAtomicAtomicIntegerArray : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithInt:(jint)length;

- (instancetype)initWithIntArray:(IOSIntArray *)array;

- (jint)addAndGetWithInt:(jint)i
                 withInt:(jint)delta;

- (jboolean)compareAndSetWithInt:(jint)i
                         withInt:(jint)expect
                         withInt:(jint)update;

- (jint)decrementAndGetWithInt:(jint)i;

- (jint)getWithInt:(jint)i;

- (jint)getAndAddWithInt:(jint)i
                 withInt:(jint)delta;

- (jint)getAndDecrementWithInt:(jint)i;

- (jint)getAndIncrementWithInt:(jint)i;

- (jint)getAndSetWithInt:(jint)i
                 withInt:(jint)newValue;

- (jint)incrementAndGetWithInt:(jint)i;

- (void)lazySetWithInt:(jint)i
               withInt:(jint)newValue;

- (jint)length;

- (void)setWithInt:(jint)i
           withInt:(jint)newValue;

- (NSString *)description;

- (jboolean)weakCompareAndSetWithInt:(jint)i
                             withInt:(jint)expect
                             withInt:(jint)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicIntegerArray)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicIntegerArray_initWithInt_(JavaUtilConcurrentAtomicAtomicIntegerArray *self, jint length);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicIntegerArray *new_JavaUtilConcurrentAtomicAtomicIntegerArray_initWithInt_(jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicIntegerArray_initWithIntArray_(JavaUtilConcurrentAtomicAtomicIntegerArray *self, IOSIntArray *array);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicIntegerArray *new_JavaUtilConcurrentAtomicAtomicIntegerArray_initWithIntArray_(IOSIntArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicIntegerArray)

#endif // _JavaUtilConcurrentAtomicAtomicIntegerArray_H_
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/LruCache.java
//

#ifndef _AndroidUtilLruCache_H_
#define _AndroidUtilLruCache_H_

#include "J2ObjC_header.h"

@protocol JavaUtilMap;

@interface AndroidUtilLruCache : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)maxSize;

- (jint)createCount;

- (void)evictAll;

- (jint)evictionCount;

- (id)getWithId:(id)key;

- (jint)hitCount;

- (jint)maxSize;

- (jint)missCount;

- (id)putWithId:(id)key
         withId:(id)value;

- (jint)putCount;

- (id)removeWithId:(id)key;

- (void)resizeWithInt:(jint)maxSize;

- (jint)size;

- (id<JavaUtilMap>)snapshot;

- (NSString *)description;

- (void)trimToSizeWithInt:(jint)maxSize;

#pragma mark Protected

- (id)createWithId:(id)key;

- (void)entryRemovedWithBoolean:(jboolean)evicted
                         withId:(id)key
                         withId:(id)oldValue
                         withId:(id)newValue;

- (jint)sizeOfWithId:(id)key
              withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilLruCache)

FOUNDATION_EXPORT void AndroidUtilLruCache_initWithInt_(AndroidUtilLruCache *self, jint maxSize);

FOUNDATION_EXPORT AndroidUtilLruCache *new_AndroidUtilLruCache_initWithInt_(jint maxSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilLruCache)

#endif // _AndroidUtilLruCache_H_
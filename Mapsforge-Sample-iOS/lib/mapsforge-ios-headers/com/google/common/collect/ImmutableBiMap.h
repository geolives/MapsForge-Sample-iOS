//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableBiMap_RESTRICT
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableBiMap_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

#define ComGoogleCommonCollectBiMap_RESTRICT 1
#define ComGoogleCommonCollectBiMap_INCLUDE 1
#include "com/google/common/collect/BiMap.h"

@class ComGoogleCommonCollectImmutableBiMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableBiMap : ComGoogleCommonCollectImmutableMap < ComGoogleCommonCollectBiMap >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableBiMap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableBiMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (ComGoogleCommonCollectImmutableBiMap *)inverse;

+ (ComGoogleCommonCollectImmutableBiMap *)of;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4;

+ (ComGoogleCommonCollectImmutableBiMap *)ofWithId:(id)k1
                                            withId:(id)v1
                                            withId:(id)k2
                                            withId:(id)v2
                                            withId:(id)k3
                                            withId:(id)v3
                                            withId:(id)k4
                                            withId:(id)v4
                                            withId:(id)k5
                                            withId:(id)v5;

- (ComGoogleCommonCollectImmutableSet *)values;

#pragma mark Package-Private

- (instancetype)init;

+ (ComGoogleCommonCollectImmutableBiMap *)fromEntriesWithJavaUtilCollection:(id<JavaUtilCollection>)entries;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *ComGoogleCommonCollectImmutableBiMap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap *ComGoogleCommonCollectImmutableBiMap_fromEntriesWithJavaUtilCollection_(id<JavaUtilCollection> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_init(ComGoogleCommonCollectImmutableBiMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableBiMap_Builder_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_Builder_

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_Builder_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"

@class ComGoogleCommonCollectImmutableBiMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableBiMap_Builder : ComGoogleCommonCollectImmutableMap_Builder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableBiMap *)build;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putWithId:(id)key
                                                     withId:(id)value;

- (ComGoogleCommonCollectImmutableBiMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableBiMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableBiMap_Builder_init(ComGoogleCommonCollectImmutableBiMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableBiMap_Builder *new_ComGoogleCommonCollectImmutableBiMap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableBiMap_Builder)

#endif

#if !defined (_ComGoogleCommonCollectImmutableBiMap_SerializedForm_) && (ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableBiMap_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableBiMap_SerializedForm_

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableBiMap_INCLUDE_ALL")
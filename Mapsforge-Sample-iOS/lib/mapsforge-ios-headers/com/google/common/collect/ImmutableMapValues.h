//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableMapValues.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableMapValues_RESTRICT
#define ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMapValues_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableMapValues_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_

#define ComGoogleCommonCollectImmutableCollection_RESTRICT 1
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#include "com/google/common/collect/ImmutableCollection.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectImmutableMapValues : ComGoogleCommonCollectImmutableCollection

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;

- (id)writeReplace;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMapValues)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMapValues_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMapValues *self, ComGoogleCommonCollectImmutableMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapValues *new_ComGoogleCommonCollectImmutableMapValues_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMapValues)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMapValues_SerializedForm_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_SerializedForm_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMapValues_$1_) && (ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL || ComGoogleCommonCollectImmutableMapValues_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMapValues_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableMapValues_INCLUDE_ALL")

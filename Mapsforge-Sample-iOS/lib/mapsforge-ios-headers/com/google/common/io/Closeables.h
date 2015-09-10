//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/io/Closeables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoCloseables_INCLUDE_ALL")
#if ComGoogleCommonIoCloseables_RESTRICT
#define ComGoogleCommonIoCloseables_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCloseables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCloseables_RESTRICT

#if !defined (_ComGoogleCommonIoCloseables_) && (ComGoogleCommonIoCloseables_INCLUDE_ALL || ComGoogleCommonIoCloseables_INCLUDE)
#define _ComGoogleCommonIoCloseables_

@class JavaUtilLoggingLogger;
@protocol JavaIoCloseable;

@interface ComGoogleCommonIoCloseables : NSObject

#pragma mark Public

+ (void)closeWithJavaIoCloseable:(id<JavaIoCloseable>)closeable
                     withBoolean:(jboolean)swallowIOException;

+ (void)closeQuietlyWithJavaIoCloseable:(id<JavaIoCloseable>)closeable;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoCloseables)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonIoCloseables_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoCloseables, logger_, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void ComGoogleCommonIoCloseables_closeWithJavaIoCloseable_withBoolean_(id<JavaIoCloseable> closeable, jboolean swallowIOException);

FOUNDATION_EXPORT void ComGoogleCommonIoCloseables_closeQuietlyWithJavaIoCloseable_(id<JavaIoCloseable> closeable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCloseables)

#endif
#pragma pop_macro("ComGoogleCommonIoCloseables_INCLUDE_ALL")
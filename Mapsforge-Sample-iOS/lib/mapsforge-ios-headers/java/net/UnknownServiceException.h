//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/UnknownServiceException.java
//

#ifndef _JavaNetUnknownServiceException_H_
#define _JavaNetUnknownServiceException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

@class JavaLangThrowable;

@interface JavaNetUnknownServiceException : JavaIoIOException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetUnknownServiceException)

FOUNDATION_EXPORT void JavaNetUnknownServiceException_init(JavaNetUnknownServiceException *self);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetUnknownServiceException_initWithNSString_(JavaNetUnknownServiceException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetUnknownServiceException_initWithNSString_withJavaLangThrowable_(JavaNetUnknownServiceException *self, NSString *detailMessage, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaNetUnknownServiceException *new_JavaNetUnknownServiceException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetUnknownServiceException)

#endif // _JavaNetUnknownServiceException_H_
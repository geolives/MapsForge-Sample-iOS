//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/testing/mockito/build_result/java/org/mockito/internal/util/ObjectMethodsGuru.java
//

#ifndef _OrgMockitoInternalUtilObjectMethodsGuru_H_
#define _OrgMockitoInternalUtilObjectMethodsGuru_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class JavaLangReflectMethod;
@protocol OrgMockitoInternalInvocationMockitoMethod;

@interface OrgMockitoInternalUtilObjectMethodsGuru : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (jboolean)isCompareToMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqualsMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isHashCodeMethodWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isToStringWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isToStringWithOrgMockitoInternalInvocationMockitoMethod:(id<OrgMockitoInternalInvocationMockitoMethod>)method;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilObjectMethodsGuru)

FOUNDATION_EXPORT void OrgMockitoInternalUtilObjectMethodsGuru_init(OrgMockitoInternalUtilObjectMethodsGuru *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilObjectMethodsGuru *new_OrgMockitoInternalUtilObjectMethodsGuru_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilObjectMethodsGuru)

#endif // _OrgMockitoInternalUtilObjectMethodsGuru_H_

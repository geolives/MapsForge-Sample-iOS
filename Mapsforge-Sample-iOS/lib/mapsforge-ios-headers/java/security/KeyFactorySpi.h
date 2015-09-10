//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyFactorySpi.java
//

#ifndef _JavaSecurityKeyFactorySpi_H_
#define _JavaSecurityKeyFactorySpi_H_

#include "J2ObjC_header.h"

@class IOSClass;
@protocol JavaSecurityKey;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecKeySpec;

@interface JavaSecurityKeyFactorySpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (id<JavaSecurityPrivateKey>)engineGeneratePrivateWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id<JavaSecurityPublicKey>)engineGeneratePublicWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id)engineGetKeySpecWithJavaSecurityKey:(id<JavaSecurityKey>)key
                             withIOSClass:(IOSClass *)keySpec;

- (id<JavaSecurityKey>)engineTranslateKeyWithJavaSecurityKey:(id<JavaSecurityKey>)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyFactorySpi)

FOUNDATION_EXPORT void JavaSecurityKeyFactorySpi_init(JavaSecurityKeyFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyFactorySpi)

#endif // _JavaSecurityKeyFactorySpi_H_
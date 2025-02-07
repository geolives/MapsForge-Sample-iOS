//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLContext.java
//

#ifndef _JavaxNetSslSSLContext_H_
#define _JavaxNetSslSSLContext_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@class JavaxNetSslSSLContextSpi;
@class JavaxNetSslSSLEngine;
@class JavaxNetSslSSLParameters;
@class JavaxNetSslSSLServerSocketFactory;
@class JavaxNetSslSSLSocketFactory;
@protocol JavaxNetSslSSLSessionContext;

@interface JavaxNetSslSSLContext : NSObject

#pragma mark Public

- (JavaxNetSslSSLEngine *)createSSLEngine;

- (JavaxNetSslSSLEngine *)createSSLEngineWithNSString:(NSString *)peerHost
                                              withInt:(jint)peerPort;

- (id<JavaxNetSslSSLSessionContext>)getClientSessionContext;

+ (JavaxNetSslSSLContext *)getDefault;

- (JavaxNetSslSSLParameters *)getDefaultSSLParameters;

+ (JavaxNetSslSSLContext *)getInstanceWithNSString:(NSString *)protocol;

+ (JavaxNetSslSSLContext *)getInstanceWithNSString:(NSString *)protocol
                          withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaxNetSslSSLContext *)getInstanceWithNSString:(NSString *)protocol
                                      withNSString:(NSString *)provider;

- (NSString *)getProtocol;

- (JavaSecurityProvider *)getProvider;

- (id<JavaxNetSslSSLSessionContext>)getServerSessionContext;

- (JavaxNetSslSSLServerSocketFactory *)getServerSocketFactory;

- (JavaxNetSslSSLSocketFactory *)getSocketFactory;

- (JavaxNetSslSSLParameters *)getSupportedSSLParameters;

- (void)init__WithJavaxNetSslKeyManagerArray:(IOSObjectArray *)km
            withJavaxNetSslTrustManagerArray:(IOSObjectArray *)tm
                withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)sr OBJC_METHOD_FAMILY_NONE;

+ (void)setDefaultWithJavaxNetSslSSLContext:(JavaxNetSslSSLContext *)sslContext;

#pragma mark Protected

- (instancetype)initWithJavaxNetSslSSLContextSpi:(JavaxNetSslSSLContextSpi *)contextSpi
                        withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                    withNSString:(NSString *)protocol;

@end

J2OBJC_STATIC_INIT(JavaxNetSslSSLContext)

FOUNDATION_EXPORT JavaxNetSslSSLContext *JavaxNetSslSSLContext_getDefault();

FOUNDATION_EXPORT void JavaxNetSslSSLContext_setDefaultWithJavaxNetSslSSLContext_(JavaxNetSslSSLContext *sslContext);

FOUNDATION_EXPORT JavaxNetSslSSLContext *JavaxNetSslSSLContext_getInstanceWithNSString_(NSString *protocol);

FOUNDATION_EXPORT JavaxNetSslSSLContext *JavaxNetSslSSLContext_getInstanceWithNSString_withNSString_(NSString *protocol, NSString *provider);

FOUNDATION_EXPORT JavaxNetSslSSLContext *JavaxNetSslSSLContext_getInstanceWithNSString_withJavaSecurityProvider_(NSString *protocol, JavaSecurityProvider *provider);

FOUNDATION_EXPORT void JavaxNetSslSSLContext_initWithJavaxNetSslSSLContextSpi_withJavaSecurityProvider_withNSString_(JavaxNetSslSSLContext *self, JavaxNetSslSSLContextSpi *contextSpi, JavaSecurityProvider *provider, NSString *protocol);

FOUNDATION_EXPORT JavaxNetSslSSLContext *new_JavaxNetSslSSLContext_initWithJavaxNetSslSSLContextSpi_withJavaSecurityProvider_withNSString_(JavaxNetSslSSLContextSpi *contextSpi, JavaSecurityProvider *provider, NSString *protocol) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLContext)

#endif // _JavaxNetSslSSLContext_H_

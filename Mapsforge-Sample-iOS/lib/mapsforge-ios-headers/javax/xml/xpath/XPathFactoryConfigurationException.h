//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathFactoryConfigurationException.java
//

#ifndef _JavaxXmlXpathXPathFactoryConfigurationException_H_
#define _JavaxXmlXpathXPathFactoryConfigurationException_H_

#include "J2ObjC_header.h"
#include "javax/xml/xpath/XPathException.h"

@class JavaLangThrowable;

@interface JavaxXmlXpathXPathFactoryConfigurationException : JavaxXmlXpathXPathException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathFactoryConfigurationException)

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryConfigurationException_initWithNSString_(JavaxXmlXpathXPathFactoryConfigurationException *self, NSString *message);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryConfigurationException *new_JavaxXmlXpathXPathFactoryConfigurationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryConfigurationException_initWithJavaLangThrowable_(JavaxXmlXpathXPathFactoryConfigurationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryConfigurationException *new_JavaxXmlXpathXPathFactoryConfigurationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFactoryConfigurationException)

#endif // _JavaxXmlXpathXPathFactoryConfigurationException_H_
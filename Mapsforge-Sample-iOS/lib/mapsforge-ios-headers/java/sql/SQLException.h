//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLException.java
//

#ifndef _JavaSqlSQLException_H_
#define _JavaSqlSQLException_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Exception.h"
#include "java/lang/Iterable.h"

@class JavaLangThrowable;
@protocol JavaUtilIterator;

@interface JavaSqlSQLException : JavaLangException < JavaIoSerializable, JavaLangIterable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)theReason;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
                         withInt:(jint)theErrorCode;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
                         withInt:(jint)theErrorCode
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithNSString:(NSString *)theReason
                    withNSString:(NSString *)theSQLState
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithNSString:(NSString *)theReason
           withJavaLangThrowable:(JavaLangThrowable *)theCause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)theCause;

- (jint)getErrorCode;

- (JavaSqlSQLException *)getNextException;

- (NSString *)getSQLState;

- (id<JavaUtilIterator>)iterator;

- (void)setNextExceptionWithJavaSqlSQLException:(JavaSqlSQLException *)ex;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLException)

FOUNDATION_EXPORT void JavaSqlSQLException_init(JavaSqlSQLException *self);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_(JavaSqlSQLException *self, NSString *theReason);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_(NSString *theReason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_(JavaSqlSQLException *self, NSString *theReason, NSString *theSQLState);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_(NSString *theReason, NSString *theSQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withInt_(JavaSqlSQLException *self, NSString *theReason, NSString *theSQLState, jint theErrorCode);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withInt_(NSString *theReason, NSString *theSQLState, jint theErrorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithJavaLangThrowable_(JavaSqlSQLException *self, JavaLangThrowable *theCause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithJavaLangThrowable_(JavaLangThrowable *theCause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *theReason, JavaLangThrowable *theCause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withJavaLangThrowable_(NSString *theReason, JavaLangThrowable *theCause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *theReason, NSString *theSQLState, JavaLangThrowable *theCause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *theReason, NSString *theSQLState, JavaLangThrowable *theCause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLException *self, NSString *theReason, NSString *theSQLState, jint theErrorCode, JavaLangThrowable *theCause);

FOUNDATION_EXPORT JavaSqlSQLException *new_JavaSqlSQLException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *theReason, NSString *theSQLState, jint theErrorCode, JavaLangThrowable *theCause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLException)

#endif // _JavaSqlSQLException_H_
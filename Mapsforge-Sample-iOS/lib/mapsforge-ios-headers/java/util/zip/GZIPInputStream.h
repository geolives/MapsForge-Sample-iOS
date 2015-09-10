//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/GZIPInputStream.java
//

#ifndef _JavaUtilZipGZIPInputStream_H_
#define _JavaUtilZipGZIPInputStream_H_

#include "J2ObjC_header.h"
#include "java/util/zip/InflaterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipCRC32;

#define JavaUtilZipGZIPInputStream_GZIP_MAGIC 35615

@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream {
 @public
  JavaUtilZipCRC32 *crc_;
  jboolean eos_;
}

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                                  withInt:(jint)size;

- (void)close;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPInputStream, crc_, JavaUtilZipCRC32 *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, GZIP_MAGIC, jint)

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *is, jint size);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *is, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPInputStream)

#endif // _JavaUtilZipGZIPInputStream_H_
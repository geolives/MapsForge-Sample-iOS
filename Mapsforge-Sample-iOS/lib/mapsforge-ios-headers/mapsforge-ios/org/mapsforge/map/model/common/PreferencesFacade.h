//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/model/common/PreferencesFacade.java
//

#ifndef _OrgMapsforgeMapModelCommonPreferencesFacade_H_
#define _OrgMapsforgeMapModelCommonPreferencesFacade_H_

#include "J2ObjC_header.h"

@protocol OrgMapsforgeMapModelCommonPreferencesFacade < NSObject, JavaObject >

- (void)clear;

- (jboolean)getBooleanWithNSString:(NSString *)key
                       withBoolean:(jboolean)defaultValue;

- (jbyte)getByteWithNSString:(NSString *)key
                    withByte:(jbyte)defaultValue;

- (jdouble)getDoubleWithNSString:(NSString *)key
                      withDouble:(jdouble)defaultValue;

- (jfloat)getFloatWithNSString:(NSString *)key
                     withFloat:(jfloat)defaultValue;

- (jint)getIntWithNSString:(NSString *)key
                   withInt:(jint)defaultValue;

- (jlong)getLongWithNSString:(NSString *)key
                    withLong:(jlong)defaultValue;

- (NSString *)getStringWithNSString:(NSString *)key
                       withNSString:(NSString *)defaultValue;

- (void)putBooleanWithNSString:(NSString *)key
                   withBoolean:(jboolean)value;

- (void)putByteWithNSString:(NSString *)key
                   withByte:(jbyte)value;

- (void)putDoubleWithNSString:(NSString *)key
                   withDouble:(jdouble)value;

- (void)putFloatWithNSString:(NSString *)key
                   withFloat:(jfloat)value;

- (void)putIntWithNSString:(NSString *)key
                   withInt:(jint)value;

- (void)putLongWithNSString:(NSString *)key
                   withLong:(jlong)value;

- (void)putStringWithNSString:(NSString *)key
                 withNSString:(NSString *)value;

- (void)save;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapModelCommonPreferencesFacade)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapModelCommonPreferencesFacade)

#endif // _OrgMapsforgeMapModelCommonPreferencesFacade_H_
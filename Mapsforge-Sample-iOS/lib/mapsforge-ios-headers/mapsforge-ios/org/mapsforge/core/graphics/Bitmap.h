//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Bitmap.java
//

#ifndef _OrgMapsforgeCoreGraphicsBitmap_H_
#define _OrgMapsforgeCoreGraphicsBitmap_H_

#include "J2ObjC_header.h"

@class JavaIoOutputStream;

@protocol OrgMapsforgeCoreGraphicsBitmap < NSObject, JavaObject >

- (void)compressWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

- (void)decrementRefCount;

- (jint)getHeight;

- (jint)getWidth;

- (void)incrementRefCount;

- (void)scaleToWithInt:(jint)width
               withInt:(jint)height;

- (void)setBackgroundColorWithInt:(jint)color;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsBitmap)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsBitmap)

#endif // _OrgMapsforgeCoreGraphicsBitmap_H_
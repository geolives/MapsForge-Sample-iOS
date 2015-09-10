//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Paint.java
//

#ifndef _OrgMapsforgeCoreGraphicsPaint_H_
#define _OrgMapsforgeCoreGraphicsPaint_H_

#include "J2ObjC_header.h"

@class IOSFloatArray;
@class OrgMapsforgeCoreGraphicsAlignEnum;
@class OrgMapsforgeCoreGraphicsCapEnum;
@class OrgMapsforgeCoreGraphicsColorEnum;
@class OrgMapsforgeCoreGraphicsFontFamilyEnum;
@class OrgMapsforgeCoreGraphicsFontStyleEnum;
@class OrgMapsforgeCoreGraphicsJoinEnum;
@class OrgMapsforgeCoreGraphicsStyleEnum;
@class OrgMapsforgeCoreModelPoint;
@protocol OrgMapsforgeCoreGraphicsBitmap;

@protocol OrgMapsforgeCoreGraphicsPaint < NSObject, JavaObject >

- (jint)getTextHeightWithNSString:(NSString *)text;

- (jint)getTextWidthWithNSString:(NSString *)text;

- (jboolean)isTransparent;

- (void)setBitmapShaderWithOrgMapsforgeCoreGraphicsBitmap:(id<OrgMapsforgeCoreGraphicsBitmap>)bitmap;

- (void)setBitmapShaderShiftWithOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)origin;

- (void)setColorWithOrgMapsforgeCoreGraphicsColorEnum:(OrgMapsforgeCoreGraphicsColorEnum *)color;

- (void)setColorWithInt:(jint)color;

- (void)setDashPathEffectWithFloatArray:(IOSFloatArray *)strokeDasharray;

- (void)setStrokeCapWithOrgMapsforgeCoreGraphicsCapEnum:(OrgMapsforgeCoreGraphicsCapEnum *)cap;

- (void)setStrokeJoinWithOrgMapsforgeCoreGraphicsJoinEnum:(OrgMapsforgeCoreGraphicsJoinEnum *)join;

- (void)setStrokeWidthWithFloat:(jfloat)strokeWidth;

- (void)setStyleWithOrgMapsforgeCoreGraphicsStyleEnum:(OrgMapsforgeCoreGraphicsStyleEnum *)style;

- (void)setTextAlignWithOrgMapsforgeCoreGraphicsAlignEnum:(OrgMapsforgeCoreGraphicsAlignEnum *)align;

- (void)setTextSizeWithFloat:(jfloat)textSize;

- (void)setTypefaceWithOrgMapsforgeCoreGraphicsFontFamilyEnum:(OrgMapsforgeCoreGraphicsFontFamilyEnum *)fontFamily
                    withOrgMapsforgeCoreGraphicsFontStyleEnum:(OrgMapsforgeCoreGraphicsFontStyleEnum *)fontStyle;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsPaint)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsPaint)

#endif // _OrgMapsforgeCoreGraphicsPaint_H_
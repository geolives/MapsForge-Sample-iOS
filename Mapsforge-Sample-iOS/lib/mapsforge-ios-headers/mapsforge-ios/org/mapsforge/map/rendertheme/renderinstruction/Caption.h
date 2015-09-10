//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/renderinstruction/Caption.java
//

#ifndef _OrgMapsforgeMapRenderthemeRenderinstructionCaption_H_
#define _OrgMapsforgeMapRenderthemeRenderinstructionCaption_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/rendertheme/renderinstruction/RenderInstruction.h"

@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapLayerRendererPolylineContainer;
@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapReaderPointOfInterest;
@protocol JavaUtilMap;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeMapRenderthemeRenderCallback;
@protocol OrgXmlpullV1XmlPullParser;

#define OrgMapsforgeMapRenderthemeRenderinstructionCaption_DEFAULT_GAP 5.0f

@interface OrgMapsforgeMapRenderthemeRenderinstructionCaption : OrgMapsforgeMapRenderthemeRenderinstructionRenderInstruction {
 @public
  NSString *symbolId_;
}

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                          withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel
                                                  withNSString:(NSString *)elementName
                                 withOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)pullParser
                                               withJavaUtilMap:(id<JavaUtilMap>)symbols;

- (void)destroy;

- (void)renderNodeWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
                      withOrgMapsforgeMapReaderPointOfInterest:(OrgMapsforgeMapReaderPointOfInterest *)poi
                                 withOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (void)renderWayWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
            withOrgMapsforgeMapLayerRendererPolylineContainer:(OrgMapsforgeMapLayerRendererPolylineContainer *)way;

- (void)scaleStrokeWidthWithFloat:(jfloat)scaleFactor;

- (void)scaleTextSizeWithFloat:(jfloat)scaleFactor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeRenderinstructionCaption)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapRenderthemeRenderinstructionCaption, symbolId_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapRenderthemeRenderinstructionCaption, DEFAULT_GAP, jfloat)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRenderinstructionCaption_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_withNSString_withOrgXmlpullV1XmlPullParser_withJavaUtilMap_(OrgMapsforgeMapRenderthemeRenderinstructionCaption *self, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel, NSString *elementName, id<OrgXmlpullV1XmlPullParser> pullParser, id<JavaUtilMap> symbols);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRenderinstructionCaption *new_OrgMapsforgeMapRenderthemeRenderinstructionCaption_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_withNSString_withOrgXmlpullV1XmlPullParser_withJavaUtilMap_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel, NSString *elementName, id<OrgXmlpullV1XmlPullParser> pullParser, id<JavaUtilMap> symbols) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRenderinstructionCaption)

#endif // _OrgMapsforgeMapRenderthemeRenderinstructionCaption_H_
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/overlay/Polygon.java
//

#ifndef _OrgMapsforgeMapLayerOverlayPolygon_H_
#define _OrgMapsforgeMapLayerOverlayPolygon_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/Layer.h"

@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelPoint;
@protocol JavaUtilList;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeMapLayerOverlayPolygon : OrgMapsforgeMapLayerLayer

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFill
                    withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke
           withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory;

- (instancetype)initWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFill
                    withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke
           withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                                          withBoolean:(jboolean)keepAligned;

- (void)drawWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox
                                        withByte:(jbyte)zoomLevel
              withOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                  withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)topLeftPoint;

- (id<JavaUtilList>)getLatLongs;

- (id<OrgMapsforgeCoreGraphicsPaint>)getPaintFill;

- (id<OrgMapsforgeCoreGraphicsPaint>)getPaintStroke;

- (void)setPaintFillWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFill;

- (void)setPaintStrokeWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerOverlayPolygon)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerOverlayPolygon_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapLayerOverlayPolygon *self, id<OrgMapsforgeCoreGraphicsPaint> paintFill, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory);

FOUNDATION_EXPORT OrgMapsforgeMapLayerOverlayPolygon *new_OrgMapsforgeMapLayerOverlayPolygon_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_(id<OrgMapsforgeCoreGraphicsPaint> paintFill, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerOverlayPolygon_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_(OrgMapsforgeMapLayerOverlayPolygon *self, id<OrgMapsforgeCoreGraphicsPaint> paintFill, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean keepAligned);

FOUNDATION_EXPORT OrgMapsforgeMapLayerOverlayPolygon *new_OrgMapsforgeMapLayerOverlayPolygon_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_(id<OrgMapsforgeCoreGraphicsPaint> paintFill, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean keepAligned) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerOverlayPolygon)

#endif // _OrgMapsforgeMapLayerOverlayPolygon_H_
@class NSString, CCRasterizationRateMapState;
@protocol MTLRasterizationRateMap;

@interface CCMultiviewTextureData : CCTextureData <CCVisitable> {
    int _id;
    struct CCTextureViewStruct { struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport; long long sliceIndex; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } physicalViewportSize; } viewsArray[2];
    long long _layout;
    id<MTLRasterizationRateMap> _rasterizationRateMap;
    CCRasterizationRateMapState *_rasterizationRateMapState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)copyFieldsTo:(id)a0;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; })viewportForViewIndex:(unsigned long long)a0 useRasterizationRasteScreenSize:(BOOL)a1;

@end

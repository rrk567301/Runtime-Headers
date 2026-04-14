@interface RWIProtocolDOMSpatialVideoMetadata : RWIProtocolJSONObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double horizontalFOVDegrees;
@property (nonatomic) double baseline;
@property (nonatomic) double disparityAdjustment;

- (id)initWithWidth:(double)a0 height:(double)a1 horizontalFOVDegrees:(double)a2 baseline:(double)a3 disparityAdjustment:(double)a4;

@end

@interface VSTProxyRendererPrimitiveOptions : NSObject

@property (nonatomic) float polygonSizeX;
@property (nonatomic) float triangleOffset;
@property (nonatomic) float primitiveScale;
@property (nonatomic) float minimumOpacity;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } splatColorCorrection;
@property (nonatomic) long long filter;
@property (nonatomic) float filterSize;
@property (nonatomic) long long depthSortingMode;
@property (nonatomic) unsigned char overdrawLimit;

- (id)init;

@end

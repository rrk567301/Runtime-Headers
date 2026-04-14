@class VSTSplatBaseRendererDynamicPrimitiveScalingOptionsDump;

@interface VSTSplatBaseRendererDrawOptionsDump : VSTSplatVersionDump

@property (nonatomic) int stopAfterStage;
@property (nonatomic) int debugMode;
@property (nonatomic) float triangleSizeOffset;
@property (nonatomic) float polySizeX;
@property (nonatomic) float primitiveScale;
@property (nonatomic) float splatScale;
@property (nonatomic) float minOpacity;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } splatColorCorrection;
@property (retain, nonatomic) VSTSplatBaseRendererDynamicPrimitiveScalingOptionsDump *dynamicPrimitiveScalingOptions;
@property (nonatomic) int filter;
@property (nonatomic) float filterSize;
@property (nonatomic) unsigned char overdrawLimit;
@property (nonatomic) BOOL useTightlyFittingRenderTargets;
@property (nonatomic) int depthSortingMode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end

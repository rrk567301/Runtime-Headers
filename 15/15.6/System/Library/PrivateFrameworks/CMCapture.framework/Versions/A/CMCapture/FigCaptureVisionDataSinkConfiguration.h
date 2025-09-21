@class NSData, NSDictionary;

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) float maxFrameRate;
@property (nonatomic) float maxBurstFrameRate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxBurstDuration;
@property (nonatomic) unsigned int gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) unsigned int maxKeypointsCount;
@property (nonatomic) float keypointDetectionThreshold;
@property (nonatomic) char featureBinningEnabled;
@property (nonatomic) char featureOrientationAssignmentEnabled;
@property (nonatomic, getter=isDynamicThresholdingEnabled) char dynamicThresholdingEnabled;
@property (nonatomic) unsigned int keypointDetectionFlowType;
@property (nonatomic) unsigned long long subPixelThreshold;
@property (nonatomic, getter=isFeatureMatchingEnabled) char featureMatchingEnabled;
@property (nonatomic) int featureMatchingDescriptorSize;
@property (nonatomic) float orientationDistanceThreshold;
@property (nonatomic) float sigmaDistanceThreshold;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (nonatomic) unsigned long long hammingDistanceThreshold;
@property (retain, nonatomic) NSData *laccConfigAndMetadata;
@property (readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end

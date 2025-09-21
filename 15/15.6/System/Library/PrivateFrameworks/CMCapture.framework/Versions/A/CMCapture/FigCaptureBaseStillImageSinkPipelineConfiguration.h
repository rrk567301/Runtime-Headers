@class FigCaptureIrisSinkConfiguration, FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char allowsMultipleInflightCaptures;
@property (nonatomic) char clientIsCameraOrDerivative;
@property (nonatomic) char allowedToModifyInputBuffers;
@property (nonatomic) char inputIs10Bit;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) float maxSupportedFrameRate;
@property (nonatomic) struct { int width; int height; } depthDataSourceDimensions;
@property (nonatomic) int motionAttachmentsSource;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (readonly, nonatomic) FigCaptureIrisSinkConfiguration *irisSinkConfiguration;
@property (nonatomic) char usesHighEncodingPriority;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) int outputColorSpaceProperties;
@property (nonatomic) char stillImageStabilizationSupported;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) struct { int width; int height; } depthDataTargetDimensions;
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

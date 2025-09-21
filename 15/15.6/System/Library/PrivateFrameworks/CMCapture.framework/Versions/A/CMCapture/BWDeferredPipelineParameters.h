@class NSDictionary;

@interface BWDeferredPipelineParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct { int width; int height; } rawSensorDimensions;
@property (retain, nonatomic) NSDictionary *dimensionsByQSubResolutionFlavorByPortType;
@property (nonatomic) int nrfVersion;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) char intelligentDistortionCorrectionEnabled;
@property (nonatomic) char geometricDistortionCorrectionEnabled;
@property (nonatomic) char dcProcessingWithDepthSupported;
@property (nonatomic) int distortionCorrectionVersion;
@property (nonatomic) int stillImageGDCSourceMode;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) int deepZoomMode;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int smartStyleRenderingVersion;
@property (nonatomic) char smartStyleRenderingEnabled;
@property (nonatomic) char smartStyleReversibilityEnabled;
@property (nonatomic) struct { int width; int height; } smartStyleLinearThumbnailDimensions;
@property (nonatomic) struct { int width; int height; } smartStyleStyledThumbnailDimensions;
@property (nonatomic) char generateInferencesForSemanticProcessingIfNeeded;
@property (nonatomic) char quadraProcessingSupportEnabled;
@property (nonatomic) char canProcessEnhancedResolution;
@property (nonatomic) char continuousZoomWithDepthSupported;
@property (nonatomic) int depthDataType;
@property (nonatomic) struct { int width; int height; } depthDataDimensions;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) unsigned int sfhrMode;
@property (nonatomic) struct CGPoint { double x; double y; } sensorCenterOffset;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)areCompatibleWith:(id)a0;

@end

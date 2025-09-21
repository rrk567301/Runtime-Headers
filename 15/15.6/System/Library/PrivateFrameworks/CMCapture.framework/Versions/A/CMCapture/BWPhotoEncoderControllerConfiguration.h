@class NSDictionary;

@interface BWPhotoEncoderControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) char alwaysAwaitInference;
@property (nonatomic) char usesHighEncodingPriority;
@property (nonatomic) char zeroShutterLagEnabled;
@property (retain, nonatomic) NSDictionary *attachedMediaConfigurationByAttachedMediaKey;
@property (nonatomic) char deferredPhotoProcessorEnabled;
@property (nonatomic) int portraitRenderQuality;
@property (nonatomic) int semanticDevelopmentVersion;
@property (copy, nonatomic) NSDictionary *inputColorInfo;
@property (nonatomic) char cameraSupportsFlash;
@property (nonatomic) struct { int width; int height; } constantColorConfidenceMapDimensions;
@property (nonatomic) int smartStyleRenderingVersion;
@property (nonatomic) char smartStyleReversibilityEnabled;
@property (nonatomic) struct { int width; int height; } stereoPhotoOutputDimensions;

- (void)dealloc;

@end

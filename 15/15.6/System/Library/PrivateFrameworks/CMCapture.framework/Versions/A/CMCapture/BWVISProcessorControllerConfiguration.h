@class BWPixelBufferPool, NSDictionary, BWFigCaptureISPProcessingSession, NSArray, NSObject, NSData;
@protocol OS_dispatch_semaphore;

@interface BWVISProcessorControllerConfiguration : NSObject

@property (nonatomic) int transformPlatform;
@property (nonatomic) int smoothingMethod;
@property (nonatomic) int motionBlurShimmerMitigationMethod;
@property (retain, nonatomic) BWFigCaptureISPProcessingSession *ispProcessingSession;
@property (retain, nonatomic) NSDictionary *inputPixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *outputPixelBufferAttributes;
@property (retain, nonatomic) BWPixelBufferPool *outputPixelBufferPool;
@property (retain, nonatomic) BWPixelBufferPool *outputDepthPixelBufferPool;
@property (retain, nonatomic) NSDictionary *outputAttachmentsPixelBufferPools;
@property (retain, nonatomic) NSDictionary *sensorIDDict;
@property (nonatomic) float cinematicLookAheadTime;
@property (nonatomic) unsigned int cinematicLookAheadFrameCount;
@property (nonatomic) char useISPMotionData;
@property (nonatomic) char sphereCorrectionEnabled;
@property (nonatomic) char sphereVideoEnabled;
@property (nonatomic) char frameRateConversionEnabled;
@property (nonatomic) char smartStyleRenderingEnabled;
@property (nonatomic) char smartStyleReversibilityEnabled;
@property (nonatomic) unsigned long long smartStyleMemoryPoolId;
@property (nonatomic) char lowResImageUsedByVideoEncoderEnabled;
@property (nonatomic) char videoStabilizationDisabled;
@property (nonatomic) char blurBorderPixels;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } livePhotoCleanOutputRect;
@property (nonatomic) char onlyGenerateTransformsParameters;
@property (nonatomic) char attachStabilizedOutputCameraTrajectory;
@property (nonatomic) char attachStabilizedTrajectoryHomography;
@property (nonatomic) char attachEstimatedMotionVector;
@property (nonatomic) char p3ToBT2020ConversionEnabled;
@property (nonatomic) int gpuPriority;
@property (nonatomic) unsigned int metalSubmissionAndCompletionQueuePriority;
@property (nonatomic) unsigned int extendedOutputRowsToFill;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *emitSampleBufferSemaphore;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) NSArray *distortionCorrectionEnabledPortTypes;
@property (retain, nonatomic) NSArray *distortionCompensationEnabledPortTypes;
@property (nonatomic) float minDistanceForBravoParallaxShift;
@property (retain, nonatomic) NSDictionary *videoSTFParameters;
@property (retain, nonatomic) NSDictionary *videoGreenGhostMitigationParameters;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) char zoomSmoothingEnabled;
@property (nonatomic) char applyFrameCropOffset;
@property (retain, nonatomic) NSData *cameraExtrinsicMatrix;
@property (nonatomic) char enableRollingShutterCorrectionOnly;
@property (nonatomic) char disableTransformLimitsForPredeterminedTrajectory;
@property (nonatomic) char useCameraGeometry;

- (void)dealloc;

@end

@class NSArray, NSDictionary, FigCaptureIrisPreparedSettings;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char irisMovieCaptureEnabled;
@property (nonatomic) char irisMovieCaptureSuspended;
@property (nonatomic) char preservesIrisMovieCaptureSuspendedOnSessionStop;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieVideoFrameDuration;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) char irisFrameHarvestingEnabled;
@property (retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) char irisApplyPreviewShift;
@property (nonatomic) char optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) char quadraHighResCaptureEnabled;
@property (nonatomic) char depthDataDeliveryEnabled;
@property (nonatomic) char portraitEffectsMatteDeliveryEnabled;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) char filterRenderingEnabled;
@property (nonatomic) char bravoConstituentPhotoDeliveryEnabled;
@property (nonatomic) char momentCaptureMovieRecordingEnabled;
@property (nonatomic) char spatialOverCaptureEnabled;
@property (nonatomic) int maxQualityPrioritization;
@property (nonatomic) char deferredProcessingEnabled;
@property (nonatomic) char digitalFlashCaptureEnabled;
@property (nonatomic) char intelligentDistortionCorrectionEnabled;
@property (nonatomic) char demosaicedRawEnabled;
@property (nonatomic) char focusPixelBlurScoreEnabled;
@property (nonatomic) char previewQualityAdjustedPhotoFilterRenderingEnabled;
@property (nonatomic) char zeroShutterLagEnabled;
@property (nonatomic) char ultraHighResolutionZeroShutterLagSupportEnabled;
@property (nonatomic) char responsiveCaptureEnabled;
@property (nonatomic) char fastCapturePrioritizationEnabled;
@property (nonatomic) char semanticStyleRenderingEnabled;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;
@property (retain, nonatomic) NSDictionary *exifFocalLengthsByZoomFactor;
@property (nonatomic) char constantColorEnabled;
@property (nonatomic) char constantColorClippingRecoveryEnabled;
@property (nonatomic) char constantColorSaturationBoostEnabled;
@property (nonatomic) char stereoPhotoCaptureEnabled;
@property (nonatomic) char applyStandardSmartStyleForStillsWhenNoStyleRequested;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end

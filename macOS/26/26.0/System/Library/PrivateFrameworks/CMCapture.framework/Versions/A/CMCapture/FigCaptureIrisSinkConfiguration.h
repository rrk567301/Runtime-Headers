@class NSArray, NSDictionary, NSString, FigCaptureIrisPreparedSettings;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL irisMovieCaptureEnabled;
@property (nonatomic) BOOL irisMovieCaptureSuspended;
@property (nonatomic) BOOL preservesIrisMovieCaptureSuspendedOnSessionStop;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } irisMovieVideoFrameDuration;
@property (nonatomic) int irisMovieAutoTrimMethod;
@property (nonatomic) BOOL irisFrameHarvestingEnabled;
@property (retain, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings;
@property (nonatomic) BOOL irisApplyPreviewShift;
@property (nonatomic) BOOL optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) BOOL filterRenderingEnabled;
@property (nonatomic) BOOL bravoConstituentPhotoDeliveryEnabled;
@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled;
@property (nonatomic) BOOL spatialOverCaptureEnabled;
@property (nonatomic) int maxQualityPrioritization;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (nonatomic) BOOL digitalFlashCaptureEnabled;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL demosaicedRawEnabled;
@property (nonatomic) BOOL focusPixelBlurScoreEnabled;
@property (nonatomic) BOOL previewQualityAdjustedPhotoFilterRenderingEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (nonatomic) BOOL ultraHighResolutionZeroShutterLagSupportEnabled;
@property (nonatomic) BOOL responsiveCaptureEnabled;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL semanticStyleRenderingEnabled;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;
@property (retain, nonatomic) NSDictionary *exifFocalLengthsByZoomFactor;
@property (nonatomic) BOOL constantColorEnabled;
@property (nonatomic) BOOL constantColorClippingRecoveryEnabled;
@property (nonatomic) BOOL constantColorSaturationBoostEnabled;
@property (nonatomic) BOOL stereoPhotoCaptureEnabled;
@property (nonatomic) BOOL applyStandardSmartStyleForStillsWhenNoStyleRequested;
@property (nonatomic) BOOL multiCamClientCompositingEnabled;
@property (copy, nonatomic) NSString *multiCamClientCompositingPrimaryConnectionID;
@property (nonatomic) BOOL cameraSensorOrientationCompensationEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (int)sinkType;
- (void)encodeWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

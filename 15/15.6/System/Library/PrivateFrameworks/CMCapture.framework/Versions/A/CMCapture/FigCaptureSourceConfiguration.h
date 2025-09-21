@class NSString, NSArray, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    struct OpaqueFigCaptureSource { } *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    char _smartCameraEnabled;
}

@property (nonatomic) char smartCameraEnabled;
@property (readonly) char bravoShiftMitigationEnabled;
@property (copy, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource { } *source;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) char hasSetVideoZoomFactorOnCaptureSource;
@property (nonatomic) float videoZoomFactor;
@property (retain, nonatomic) NSArray *fallbackPrimaryConstituentDeviceTypes;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (readonly, nonatomic) int sourceDeviceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) char applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDurationClientOverride;
@property (nonatomic) char sensorHDREnabled;
@property (nonatomic) char highlightRecoveryEnabled;
@property (nonatomic) int colorSpace;
@property (nonatomic) char depthDataDeliveryEnabled;
@property (nonatomic) float depthDataMaxFrameRate;
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) char lowLightVideoCaptureEnabled;
@property (nonatomic) char variableFrameRateVideoCaptureEnabled;
@property (nonatomic) int videoStabilizationStrength;
@property (nonatomic) char spatialOverCaptureEnabled;
@property (nonatomic) char nonDestructiveCropEnabled;
@property (nonatomic) struct CGSize { double width; double height; } normalizedNonDestructiveCropSize;
@property (nonatomic) char geometricDistortionCorrectionEnabled;
@property (nonatomic) char cinematicFramingEnabled;
@property (nonatomic, getter=isCinematicFramingSupported) char cinematicFramingSupported;
@property (nonatomic) int cinematicFramingControlMode;
@property (nonatomic, getter=isBackgroundBlurSupported) char backgroundBlurSupported;
@property (nonatomic) char backgroundBlurEnabled;
@property (nonatomic, getter=isStudioLightingSupported) char studioLightingSupported;
@property (nonatomic) char studioLightingEnabled;
@property (nonatomic) char reactionEffectsSupported;
@property (nonatomic) char reactionEffectsEnabled;
@property (nonatomic, getter=isBackgroundReplacementSupported) char backgroundReplacementSupported;
@property (nonatomic) char backgroundReplacementEnabled;
@property (nonatomic) int faceDrivenAEAFMode;
@property (nonatomic) char faceDrivenAEAFEnabledByDefault;
@property (nonatomic) char deskCamEnabled;
@property (nonatomic) struct { int width; int height; } deskCamOutputDimensions;
@property (nonatomic) char manualCinematicFramingEnabled;
@property (nonatomic) float manualFramingPanningAngleX;
@property (nonatomic) float manualFramingPanningAngleY;
@property (nonatomic) double manualFramingDefaultZoomFactor;
@property (nonatomic) char gazeSelectionEnabled;
@property (nonatomic, getter=isDockedTrackingEnabled) char dockedTrackingEnabled;
@property (nonatomic) char clientExpectsCameraMountedInLandscapeOrientation;
@property (nonatomic) char clientOSVersionSupportsDecoupledIO;
@property (retain, nonatomic) NSString *clientAudioClockDeviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)sourceTypeForString:(id)a0;
+ (id)stringForSourceDeviceType:(int)a0;
+ (id)stringForSourcePosition:(int)a0;
+ (id)stringForSourceType:(int)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)initWithSourceType:(int)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end

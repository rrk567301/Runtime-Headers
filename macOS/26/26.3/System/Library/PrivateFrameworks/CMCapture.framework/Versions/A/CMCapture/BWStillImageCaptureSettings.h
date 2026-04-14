@class NSString, NSArray, BWFrameStatisticsByPortType, NSDictionary, BWStillImageCaptureMetadata;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {
    BWFrameStatisticsByPortType *_frameStatisticsByPortType;
    NSDictionary *_streamSelectorDebugInfo;
    BWStillImageCaptureMetadata *_metadata;
    NSString *_cmioCompressedFormat;
    BOOL _cmioHighResolutionPhotoEnabled;
    int _cmioFlashMode;
    int _cmioQualityPrioritization;
    struct { int width; int height; } _cmioMaxPhotoDimensions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) int captureType;
@property (readonly, nonatomic) unsigned long long captureFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (readonly, nonatomic) BOOL deliverOriginalImage;
@property (readonly, nonatomic) BOOL deliverSushiRaw;
@property (nonatomic) BOOL deliverDeferredPhotoProxyImage;
@property (readonly, nonatomic) BOOL downgradedDeepFusionEnhancedResolutionCapture;
@property (nonatomic) unsigned long long learnedNRStereoPhotoFrameFlag;
@property (retain, nonatomic) NSString *masterPortType;
@property (readonly, nonatomic) NSArray *secondaryPortTypes;
@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) NSArray *captureStreamSettings;
@property (readonly, nonatomic) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (readonly, nonatomic) BOOL expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTimeMachinePTS;
@property (copy, nonatomic) NSString *applicationID;
@property (nonatomic) long long stillImageRequestTime;
@property (nonatomic) float scaleFactor;

+ (void)initialize;

- (void)setCmioCompressedFormat:(id)a0;
- (struct { int x0; int x1; })cmioMaxPhotoDimensions;
- (void)setStreamSelectorDebugInfo:(id)a0;
- (void)setCmioHighResolutionPhotoEnabled:(BOOL)a0;
- (void)updateForLearnedFusionMissingEVMinus:(BOOL)a0 missingHDRErrorRecoveryEVZero:(BOOL)a1;
- (void)setMetadata:(id)a0;
- (id)initWithSettingsID:(long long)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 sceneFlags:(unsigned long long)a3 frameStatisticsByPortType:(id)a4 deliverOriginalImage:(BOOL)a5 deliverSushiRaw:(BOOL)a6 captureStreamSettings:(id)a7;
- (id)streamSelectorDebugInfo;
- (void)setCmioMaxPhotoDimensions:(struct { int x0; int x1; })a0;
- (id)cmioCompressedFormat;
- (id)description;
- (id)captureStreamSettingsForPortType:(id)a0;
- (void)disableAWBReflow;
- (int)cmioFlashMode;
- (id)metadata;
- (id)frameStatisticsByPortType;
- (void)cannotProcessDeepFusionEnhancedResolution;
- (int)cmioQualityPrioritization;
- (BOOL)cmioHighResolutionPhotoEnabled;
- (void)setCmioQualityPrioritization:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setCmioFlashMode:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)cannotProcessDepthPhotos;
- (void)encodeWithCoder:(id)a0;

@end

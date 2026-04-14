@class NSString, NSArray, BWFrameStatisticsByPortType, BWStillImageCaptureMetadata;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {
    BWFrameStatisticsByPortType *_frameStatisticsByPortType;
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
@property (readonly, nonatomic) BOOL captureSourceIsExternalCamera;
@property (readonly, nonatomic) BOOL deliverOriginalImage;
@property (readonly, nonatomic) BOOL deliverSushiRaw;
@property (nonatomic) BOOL deliverDeferredPhotoProxyImage;
@property (nonatomic) BOOL produceDeferredPhotoProxyImage;
@property (readonly, nonatomic) BOOL downgradedDeepFusionEnhancedResolutionCapture;
@property (retain, nonatomic) NSString *masterPortType;
@property (readonly, nonatomic) NSArray *portTypes;
@property (readonly, nonatomic) NSArray *captureStreamSettings;
@property (readonly, nonatomic) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (readonly, nonatomic) BOOL expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTimeMachinePTS;
@property (copy, nonatomic) NSString *applicationID;
@property (nonatomic) long long stillImageRequestTime;
@property (nonatomic) float scaleFactor;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadata;
- (void)setMetadata:(id)a0;
- (void)setCmioCompressedFormat:(id)a0;
- (void)setCmioHighResolutionPhotoEnabled:(BOOL)a0;
- (void)cannotProcessDeepFusionEnhancedResolution;
- (void)cannotProcessDepthPhotos;
- (id)captureStreamSettingsForPortType:(id)a0;
- (id)cmioCompressedFormat;
- (int)cmioFlashMode;
- (BOOL)cmioHighResolutionPhotoEnabled;
- (struct { int x0; int x1; })cmioMaxPhotoDimensions;
- (int)cmioQualityPrioritization;
- (id)frameStatisticsByPortType;
- (id)initWithSettingsID:(long long)a0 captureType:(int)a1 captureFlags:(unsigned long long)a2 sceneFlags:(unsigned long long)a3 captureSourceIsExternalCamera:(BOOL)a4 frameStatisticsByPortType:(id)a5 deliverOriginalImage:(BOOL)a6 deliverSushiRaw:(BOOL)a7 captureStreamSettings:(id)a8;
- (void)setCmioFlashMode:(int)a0;
- (void)setCmioMaxPhotoDimensions:(struct { int x0; int x1; })a0;
- (void)setCmioQualityPrioritization:(int)a0;

@end

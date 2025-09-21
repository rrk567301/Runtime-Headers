@class FigCaptureIrisStillImageSettings, NSString;

@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying> {
    long long _settingsID;
    NSString *_captureRequestIdentifier;
    unsigned long long _userInitiatedCaptureTime;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) FigCaptureIrisStillImageSettings *stillImageSettings;
@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime;
@property (nonatomic) int torchMode;
@property (nonatomic) int flashMode;
@property (nonatomic) char autoRedEyeReductionEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int clientQualityPrioritization;
@property (nonatomic) int HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) char autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) char autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) char autoDeferredProcessingEnabled;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) char depthDataDeliveryEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSettingsID:(long long)a0 captureRequestIdentifier:(id)a1 userInitiatedCaptureTime:(unsigned long long)a2;
- (id)initWithStillImageSettings:(id)a0;

@end

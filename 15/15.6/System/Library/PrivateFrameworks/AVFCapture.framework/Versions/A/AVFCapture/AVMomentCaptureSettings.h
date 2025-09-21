@class AVCapturePhotoSettings, NSString;

@interface AVMomentCaptureSettings : NSObject <NSCopying> {
    AVCapturePhotoSettings *_photoSettings;
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    long long _flashMode;
    long long _digitalFlashMode;
    long long _photoQualityPrioritization;
    long long _HDRMode;
    long long _torchMode;
    NSString *_bravoCameraSelectionBehaviorForRecording;
}

@property (readonly, nonatomic) long long uniqueID;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime;
@property (readonly, nonatomic) AVCapturePhotoSettings *photoSettings;
@property (nonatomic) long long torchMode;
@property (copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) char autoRedEyeReductionEnabled;
@property (nonatomic) long long digitalFlashMode;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) long long HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) char autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) char autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredPhotoDeliveryEnabled) char autoDeferredPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) char autoDeferredProcessingEnabled;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) struct { int width; int height; } maxPhotoDimensions;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) char depthDataDeliveryEnabled;

+ (id)settingsWithPhotoSettings:(id)a0;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)a0;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)a0 uniqueID:(long long)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)_initWithPhotoSettings:(id)a0;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)a0 uniqueID:(long long)a1;

@end

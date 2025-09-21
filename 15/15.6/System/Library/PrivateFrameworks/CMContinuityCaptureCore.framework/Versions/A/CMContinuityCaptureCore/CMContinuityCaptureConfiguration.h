@class CMContinuityCaptureStreamFormat, NSUUID, NSDictionary, NSString;

@interface CMContinuityCaptureConfiguration : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSDictionary *_centerStageRectOfInterest;
    NSString *_centerStageRectOfInterestStr;
}

@property (class, readonly) char supportsSecureCoding;

@property long long entity;
@property (retain, nonatomic) NSUUID *sessionID;
@property unsigned long long generationID;
@property char suppressVideoEffects;
@property char portraitEffectEnabled;
@property char centerStageEnabled;
@property (copy) NSDictionary *centerStageRectOfInterest;
@property long long centerStageFramingMode;
@property long long forcefulCenterStageEnablementType;
@property (readonly, getter=isCenterStageForcefullyEnabled) char centerStageForcefullyEnabled;
@property char faceDetectionEnabled;
@property char humanBodyDetectionEnabled;
@property char humanFullBodyDetectionEnabled;
@property char studioLightingEnabled;
@property float portraitEffectAperture;
@property float studioLightingIntensity;
@property char reactionEffectsEnabled;
@property char reactionEffectGesturesEnabled;
@property char reactionEffectSuppressedGesturesEnabled;
@property char backgroundReplacementEnabled;
@property (retain) struct __CVBuffer { } *backgroundReplacementPixelBuffer;
@property (retain) CMContinuityCaptureStreamFormat *format;
@property unsigned int maxFrameRate;
@property unsigned int minFrameRate;
@property double videoZoomFactor;
@property char asyncStillCaptureEnabled;
@property (retain) NSDictionary *asyncStillCaptureConfigs;
@property (readonly) int maxPhotoQualityPrioritization;
@property (nonatomic) long long deskViewCameraMode;
@property (nonatomic) unsigned int audioDeviceMode;
@property (nonatomic) double panningAngleX;
@property (nonatomic) double panningAngleY;
@property (nonatomic) char centerStageFieldOfViewRestrictedToWide;
@property (nonatomic) long long manualFramingDeviceType;

+ (id)stringForManualFramingDeviceType:(long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

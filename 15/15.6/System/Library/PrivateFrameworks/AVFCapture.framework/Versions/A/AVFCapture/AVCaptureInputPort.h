@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
    AVCaptureInputPortInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureInput *input;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) NSString *sourceDeviceType;
@property (readonly, nonatomic) long long sourceDevicePosition;

+ (void)initialize;
+ (char)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(char)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;

- (void)dealloc;
- (id)description;
- (void)setOwner:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (int)changeSeed;
- (id)sourceID;
- (void)_updateReactionEffectsUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (id)_initWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(char)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;
- (void)_setClock:(struct OpaqueCMClock { } *)a0;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)_updateBackgroundBlurUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (void)_updateBackgroundReplacementUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (void)_updateCenterStageUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (void)_updateStudioLightingUnavailableReasonsWithDevice:(id)a0 deviceInput:(id)a1;
- (void)bumpChangeSeed;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)a0;
- (char)sourcesFromConstituentDevice;

@end

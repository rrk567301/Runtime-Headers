@class AFAudioPlaybackRequest, NSDate, AFAccessibilityState;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFAccessibilityState *accessibilityState;
@property (readonly, nonatomic) long long deviceRingerSwitchState;
@property (readonly, nonatomic) BOOL isDeviceInCarDNDMode;
@property (readonly, nonatomic) BOOL isDeviceInStarkMode;
@property (readonly, nonatomic) BOOL supportsCarPlayVehicleData;
@property (readonly, nonatomic) BOOL isDeviceWatchAuthenticated;
@property (readonly, nonatomic) BOOL areAnnouncementRequestsPermittedByPresentationWhileActive;
@property (readonly, nonatomic) float outputVolume;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowBeginDate;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowEndDate;
@property (readonly, nonatomic) BOOL carOwnsMainAudio;
@property (readonly, nonatomic) BOOL isEyesFreeDevice;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessibilityState:(id)a0 deviceRingerSwitchState:(long long)a1 isDeviceInCarDNDMode:(BOOL)a2 isDeviceInStarkMode:(BOOL)a3 supportsCarPlayVehicleData:(BOOL)a4 isDeviceWatchAuthenticated:(BOOL)a5 areAnnouncementRequestsPermittedByPresentationWhileActive:(BOOL)a6 outputVolume:(float)a7 tapToSiriAudioPlaybackRequest:(id)a8 twoShotAudioPlaybackRequest:(id)a9 deviceSetupFlowBeginDate:(id)a10 deviceSetupFlowEndDate:(id)a11 carOwnsMainAudio:(BOOL)a12 isEyesFreeDevice:(BOOL)a13;

@end

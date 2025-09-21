@class AFAudioPlaybackRequest, NSDate, AFAccessibilityState;

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) AFAccessibilityState *accessibilityState;
@property (readonly, nonatomic) long long deviceRingerSwitchState;
@property (readonly, nonatomic) char isDeviceInCarDNDMode;
@property (readonly, nonatomic) char isDeviceInStarkMode;
@property (readonly, nonatomic) char supportsCarPlayVehicleData;
@property (readonly, nonatomic) char isDeviceWatchAuthenticated;
@property (readonly, nonatomic) char areAnnouncementRequestsPermittedByPresentationWhileActive;
@property (readonly, nonatomic) float outputVolume;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (readonly, copy, nonatomic) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowBeginDate;
@property (readonly, copy, nonatomic) NSDate *deviceSetupFlowEndDate;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAccessibilityState:(id)a0 deviceRingerSwitchState:(long long)a1 isDeviceInCarDNDMode:(char)a2 isDeviceInStarkMode:(char)a3 supportsCarPlayVehicleData:(char)a4 isDeviceWatchAuthenticated:(char)a5 areAnnouncementRequestsPermittedByPresentationWhileActive:(char)a6 outputVolume:(float)a7 tapToSiriAudioPlaybackRequest:(id)a8 twoShotAudioPlaybackRequest:(id)a9 deviceSetupFlowBeginDate:(id)a10 deviceSetupFlowEndDate:(id)a11;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end

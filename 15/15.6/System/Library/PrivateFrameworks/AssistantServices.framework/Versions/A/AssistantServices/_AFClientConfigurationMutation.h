@class AFClientConfiguration, NSString, AFAccessibilityState, NSDate, AFAudioPlaybackRequest;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {
    AFClientConfiguration *_base;
    AFAccessibilityState *_accessibilityState;
    long long _deviceRingerSwitchState;
    char _isDeviceInCarDNDMode;
    char _isDeviceInStarkMode;
    char _supportsCarPlayVehicleData;
    char _isDeviceWatchAuthenticated;
    char _areAnnouncementRequestsPermittedByPresentationWhileActive;
    float _outputVolume;
    AFAudioPlaybackRequest *_tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest *_twoShotAudioPlaybackRequest;
    NSDate *_deviceSetupFlowBeginDate;
    NSDate *_deviceSetupFlowEndDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAccessibilityState : 1; unsigned char hasDeviceRingerSwitchState : 1; unsigned char hasIsDeviceInCarDNDMode : 1; unsigned char hasIsDeviceInStarkMode : 1; unsigned char hasSupportsCarPlayVehicleData : 1; unsigned char hasIsDeviceWatchAuthenticated : 1; unsigned char hasAreAnnouncementRequestsPermittedByPresentationWhileActive : 1; unsigned char hasOutputVolume : 1; unsigned char hasTapToSiriAudioPlaybackRequest : 1; unsigned char hasTwoShotAudioPlaybackRequest : 1; unsigned char hasDeviceSetupFlowBeginDate : 1; unsigned char hasDeviceSetupFlowEndDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setAccessibilityState:(id)a0;
- (void)setOutputVolume:(float)a0;
- (float)getOutputVolume;
- (void)setTwoShotAudioPlaybackRequest:(id)a0;
- (id)getAccessibilityState;
- (char)getAreAnnouncementRequestsPermittedByPresentationWhileActive;
- (long long)getDeviceRingerSwitchState;
- (id)getDeviceSetupFlowBeginDate;
- (id)getDeviceSetupFlowEndDate;
- (char)getIsDeviceInCarDNDMode;
- (char)getIsDeviceInStarkMode;
- (char)getIsDeviceWatchAuthenticated;
- (char)getSupportsCarPlayVehicleData;
- (id)getTapToSiriAudioPlaybackRequest;
- (id)getTwoShotAudioPlaybackRequest;
- (id)initWithBase:(id)a0;
- (void)setAreAnnouncementRequestsPermittedByPresentationWhileActive:(char)a0;
- (void)setDeviceRingerSwitchState:(long long)a0;
- (void)setDeviceSetupFlowBeginDate:(id)a0;
- (void)setDeviceSetupFlowEndDate:(id)a0;
- (void)setIsDeviceInCarDNDMode:(char)a0;
- (void)setIsDeviceInStarkMode:(char)a0;
- (void)setIsDeviceWatchAuthenticated:(char)a0;
- (void)setSupportsCarPlayVehicleData:(char)a0;
- (void)setTapToSiriAudioPlaybackRequest:(id)a0;

@end

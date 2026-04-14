@class NSString, AFModesConfiguration;

@interface _AFModesConfigurationMutation : NSObject <AFModesConfigurationMutating> {
    AFModesConfiguration *_baseModel;
    BOOL _isEyesFree;
    BOOL _isForCarDND;
    BOOL _isVoiceTriggerRequest;
    BOOL _isConnectedToCarPlay;
    BOOL _isRequestMadeWithPhysicalDeviceInteraction;
    BOOL _userTypedInSiri;
    NSString *_modeOverrideValue;
    long long _deviceRaised;
    long long _faceDetected;
    long long _touchScreenDetected;
    long long _buttonPressDetected;
    long long _flatDevicePosture;
    long long _deviceOrientation;
    long long _isInWorkout;
    long long _isBacklightOn;
    long long _isInWaterLock;
    long long _isInSleepLock;
    long long _isInTheaterMode;
    long long _isOnWrist;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsEyesFree : 1; unsigned char hasIsForCarDND : 1; unsigned char hasIsVoiceTriggerRequest : 1; unsigned char hasIsConnectedToCarPlay : 1; unsigned char hasIsRequestMadeWithPhysicalDeviceInteraction : 1; unsigned char hasUserTypedInSiri : 1; unsigned char hasModeOverrideValue : 1; unsigned char hasDeviceRaised : 1; unsigned char hasFaceDetected : 1; unsigned char hasTouchScreenDetected : 1; unsigned char hasButtonPressDetected : 1; unsigned char hasFlatDevicePosture : 1; unsigned char hasDeviceOrientation : 1; unsigned char hasIsInWorkout : 1; unsigned char hasIsBacklightOn : 1; unsigned char hasIsInWaterLock : 1; unsigned char hasIsInSleepLock : 1; unsigned char hasIsInTheaterMode : 1; unsigned char hasIsOnWrist : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDeviceOrientation:(long long)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setIsEyesFree:(BOOL)a0;
- (void)setIsForCarDND:(BOOL)a0;
- (void)setIsVoiceTriggerRequest:(BOOL)a0;
- (void)setIsConnectedToCarPlay:(BOOL)a0;
- (void)setIsRequestMadeWithPhysicalDeviceInteraction:(BOOL)a0;
- (void)setUserTypedInSiri:(BOOL)a0;
- (void)setModeOverrideValue:(id)a0;
- (void)setDeviceRaised:(long long)a0;
- (void)setFaceDetected:(long long)a0;
- (void)setTouchScreenDetected:(long long)a0;
- (void)setButtonPressDetected:(long long)a0;
- (void)setFlatDevicePosture:(long long)a0;
- (void)setIsInWorkout:(long long)a0;
- (void)setIsBacklightOn:(long long)a0;
- (void)setIsInWaterLock:(long long)a0;
- (void)setIsInSleepLock:(long long)a0;
- (void)setIsInTheaterMode:(long long)a0;
- (void)setIsOnWrist:(long long)a0;

@end

@class NSString, AFModesConfiguration;

@interface _AFModesConfigurationMutation : NSObject <AFModesConfigurationMutating> {
    AFModesConfiguration *_base;
    BOOL _isEyesFree;
    BOOL _isUIFree;
    BOOL _isForCarDND;
    BOOL _isInAmbient;
    BOOL _isMapsNavigationActive;
    BOOL _isVoiceTriggerRequest;
    BOOL _isConnectedToCarPlay;
    BOOL _isRequestMadeWithPhysicalDeviceInteraction;
    BOOL _isAudioAccessoryButtonActivation;
    BOOL _isSiriAutoPrompt;
    BOOL _isFlexibleFollowup;
    BOOL _userTypedInSiri;
    NSString *_modeOverrideValue;
    BOOL _isDeviceUnlocked;
    BOOL _isDeviceScreenON;
    BOOL _isInitialBringUp;
    long long _isUserEngagedWithDevice;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsEyesFree : 1; unsigned char hasIsUIFree : 1; unsigned char hasIsForCarDND : 1; unsigned char hasIsInAmbient : 1; unsigned char hasIsMapsNavigationActive : 1; unsigned char hasIsVoiceTriggerRequest : 1; unsigned char hasIsConnectedToCarPlay : 1; unsigned char hasIsRequestMadeWithPhysicalDeviceInteraction : 1; unsigned char hasIsAudioAccessoryButtonActivation : 1; unsigned char hasIsSiriAutoPrompt : 1; unsigned char hasIsFlexibleFollowup : 1; unsigned char hasUserTypedInSiri : 1; unsigned char hasModeOverrideValue : 1; unsigned char hasIsDeviceUnlocked : 1; unsigned char hasIsDeviceScreenON : 1; unsigned char hasIsInitialBringUp : 1; unsigned char hasIsUserEngagedWithDevice : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setIsForCarDND:(BOOL)a0;
- (void)setIsInAmbient:(BOOL)a0;
- (BOOL)getIsAudioAccessoryButtonActivation;
- (BOOL)getIsConnectedToCarPlay;
- (BOOL)getIsDeviceScreenON;
- (BOOL)getIsDeviceUnlocked;
- (BOOL)getIsEyesFree;
- (BOOL)getIsFlexibleFollowup;
- (BOOL)getIsForCarDND;
- (BOOL)getIsInAmbient;
- (BOOL)getIsInitialBringUp;
- (BOOL)getIsMapsNavigationActive;
- (BOOL)getIsRequestMadeWithPhysicalDeviceInteraction;
- (BOOL)getIsSiriAutoPrompt;
- (BOOL)getIsUIFree;
- (long long)getIsUserEngagedWithDevice;
- (BOOL)getIsVoiceTriggerRequest;
- (id)getModeOverrideValue;
- (BOOL)getUserTypedInSiri;
- (void)setIsAudioAccessoryButtonActivation:(BOOL)a0;
- (void)setIsConnectedToCarPlay:(BOOL)a0;
- (void)setIsDeviceScreenON:(BOOL)a0;
- (void)setIsDeviceUnlocked:(BOOL)a0;
- (void)setIsEyesFree:(BOOL)a0;
- (void)setIsFlexibleFollowup:(BOOL)a0;
- (void)setIsInitialBringUp:(BOOL)a0;
- (void)setIsMapsNavigationActive:(BOOL)a0;
- (void)setIsRequestMadeWithPhysicalDeviceInteraction:(BOOL)a0;
- (void)setIsSiriAutoPrompt:(BOOL)a0;
- (void)setIsUIFree:(BOOL)a0;
- (void)setIsUserEngagedWithDevice:(long long)a0;
- (void)setIsVoiceTriggerRequest:(BOOL)a0;
- (void)setModeOverrideValue:(id)a0;
- (void)setUserTypedInSiri:(BOOL)a0;

@end

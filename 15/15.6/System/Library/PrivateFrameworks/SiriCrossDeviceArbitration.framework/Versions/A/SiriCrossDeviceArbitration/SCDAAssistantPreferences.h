@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAAssistantPreferences : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForInternalPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForLanguageCode;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForOutputVoice;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForNanoPrefs;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForAssistantEnablement;
    struct atomic_flag { _Atomic BOOL _Value; } _registeredForDictationEnablement;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    char _navTokenIsValid;
    int _navToken;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;
+ (id)sharedPreferencesWithInstanceContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInstanceContext:(id)a0;
- (char)myriadShouldIgnoreAdjustedBoost;
- (void)_preferencesDidChangeExternally;
- (char)disableMyriadBLEActivity;
- (char)ignoreMyriadPlatformBias;
- (int)myriadConstantGoodness;
- (char)myriadCoordinationEnabled;
- (char)myriadCoordinationEnabledForAccessoryLogging;
- (float)myriadDeviceAdjust;
- (unsigned char)myriadDeviceClass;
- (double)myriadDeviceDelay;
- (id)myriadDeviceGroup;
- (double)myriadDeviceSlowdown;
- (double)myriadDeviceTrumpDelay;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (char)myriadDuckingEnabled;
- (id)myriadLastWin;
- (double)myriadMaxNoOperationDelay;
- (id)myriadMonitorTimeOutInterval;
- (char)myriadServerHasProvisioned;
- (char)myriadServerProvisioning;
- (double)myriadTestDeviceDelay;
- (void)setIgnoreMyriadAdjustedBoost:(char)a0;
- (void)setIgnoreMyriadPlatformBias:(char)a0;
- (void)setMyriadConstantGoodness:(int)a0;
- (void)setMyriadCoordinationEnabled:(char)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadDeviceDelay:(double)a0;
- (void)setMyriadDeviceGroup:(id)a0;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (void)setMyriadDuckingEnabled:(char)a0;
- (void)setMyriadLastWin;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (void)setMyriadServerHasProvisioned:(char)a0;
- (void)setMyriadServerProvisioning:(char)a0;
- (void)setMyriadTestDeviceDelay:(double)a0;

@end

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
    BOOL _navTokenIsValid;
    int _navToken;
    AFInstanceContext *_instanceContext;
}

@property (readonly, nonatomic) BOOL disableRecencyBoost;
@property (readonly, nonatomic) double recencyBoostInitialInterval;
@property (readonly, nonatomic) double recencyBoostDecayInterval;

+ (id)sharedPreferencesWithInstanceContext:(id)a0;
+ (id)sharedPreferences;

- (double)myriadDeviceSlowdown;
- (BOOL)ignoreMyriadPlatformBias;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (void)setMyriadDeviceDelay:(double)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (id)myriadDeviceGroup;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (double)myriadDeviceTrumpDelay;
- (void)setMyriadLastWin;
- (id)init;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (id)myriadMonitorTimeOutInterval;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (BOOL)myriadServerHasProvisioned;
- (BOOL)myriadServerProvisioning;
- (double)myriadDeviceDelay;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (unsigned char)myriadDeviceClass;
- (void)setMyriadDeviceGroup:(id)a0;
- (void)_preferencesDidChangeExternally;
- (BOOL)myriadDuckingEnabled;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (double)myriadMaxNoOperationDelay;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadConstantGoodness:(int)a0;
- (float)myriadDeviceAdjust;
- (int)myriadConstantGoodness;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (id)myriadLastWin;
- (BOOL)disableMyriadBLEActivity;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (double)myriadTestDeviceDelay;
- (BOOL)myriadCoordinationEnabled;
- (void).cxx_destruct;
- (void)setMyriadTestDeviceDelay:(double)a0;

@end

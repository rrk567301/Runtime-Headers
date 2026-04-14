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

- (BOOL)myriadCoordinationEnabled;
- (id)initWithInstanceContext:(id)a0;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (double)myriadDeviceDelay;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (float)myriadDeviceAdjust;
- (BOOL)ignoreMyriadPlatformBias;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (id)myriadMonitorTimeOutInterval;
- (BOOL)myriadServerHasProvisioned;
- (void)setMyriadConstantGoodness:(int)a0;
- (void)setMyriadDeviceGroup:(id)a0;
- (double)myriadDeviceTrumpDelay;
- (void)setMyriadDeviceDelay:(double)a0;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (double)myriadDeviceSlowdown;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (BOOL)myriadServerProvisioning;
- (id)myriadLastWin;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (BOOL)myriadDuckingEnabled;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (BOOL)disableMyriadBLEActivity;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (int)myriadConstantGoodness;
- (double)myriadMaxNoOperationDelay;
- (unsigned char)myriadDeviceClass;
- (void).cxx_destruct;
- (void)setMyriadTestDeviceDelay:(double)a0;
- (void)_preferencesDidChangeExternally;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (id)myriadDeviceGroup;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (double)myriadTestDeviceDelay;
- (void)setMyriadLastWin;
- (id)init;

@end

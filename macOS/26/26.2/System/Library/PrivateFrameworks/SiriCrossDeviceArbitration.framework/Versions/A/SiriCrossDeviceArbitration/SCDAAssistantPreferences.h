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

- (id)initWithInstanceContext:(id)a0;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (void)setMyriadDeviceGroup:(id)a0;
- (BOOL)myriadDuckingEnabled;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (void)setMyriadLastWin;
- (int)myriadConstantGoodness;
- (void)_preferencesDidChangeExternally;
- (double)myriadDeviceTrumpDelay;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (id)myriadLastWin;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadTestDeviceDelay:(double)a0;
- (id)myriadMonitorTimeOutInterval;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (double)myriadDeviceSlowdown;
- (double)myriadTestDeviceDelay;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (void).cxx_destruct;
- (void)setMyriadDeviceAdjust:(float)a0;
- (id)myriadDeviceGroup;
- (BOOL)myriadServerProvisioning;
- (BOOL)disableMyriadBLEActivity;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (BOOL)myriadCoordinationEnabled;
- (void)setMyriadDeviceDelay:(double)a0;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (unsigned char)myriadDeviceClass;
- (float)myriadDeviceAdjust;
- (id)init;
- (double)myriadMaxNoOperationDelay;
- (BOOL)myriadServerHasProvisioned;
- (double)myriadDeviceDelay;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (BOOL)ignoreMyriadPlatformBias;
- (void)setMyriadConstantGoodness:(int)a0;

@end

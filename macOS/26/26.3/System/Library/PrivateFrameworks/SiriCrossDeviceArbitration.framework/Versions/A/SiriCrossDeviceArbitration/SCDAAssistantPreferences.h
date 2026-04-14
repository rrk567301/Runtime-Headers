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
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (BOOL)myriadServerProvisioning;
- (double)myriadDeviceTrumpDelay;
- (double)myriadDeviceSlowdown;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)_preferencesDidChangeExternally;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (void)setMyriadDeviceDelay:(double)a0;
- (id)myriadDeviceGroup;
- (void)setMyriadTestDeviceDelay:(double)a0;
- (id)init;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (BOOL)ignoreMyriadPlatformBias;
- (int)myriadConstantGoodness;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (void)setMyriadLastWin;
- (BOOL)myriadCoordinationEnabled;
- (unsigned char)myriadDeviceClass;
- (void).cxx_destruct;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (BOOL)myriadDuckingEnabled;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (BOOL)myriadServerHasProvisioned;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (void)setMyriadDeviceGroup:(id)a0;
- (double)myriadMaxNoOperationDelay;
- (void)setMyriadDeviceAdjust:(float)a0;
- (id)myriadMonitorTimeOutInterval;
- (id)myriadLastWin;
- (double)myriadTestDeviceDelay;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (double)myriadDeviceDelay;
- (void)setMyriadConstantGoodness:(int)a0;
- (float)myriadDeviceAdjust;
- (BOOL)disableMyriadBLEActivity;

@end

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

+ (id)sharedPreferences;
+ (id)sharedPreferencesWithInstanceContext:(id)a0;

- (int)myriadConstantGoodness;
- (double)myriadDeviceSlowdown;
- (void)setMyriadDeviceTrumpDelay:(double)a0;
- (id)initWithInstanceContext:(id)a0;
- (BOOL)myriadCoordinationEnabled;
- (BOOL)disableMyriadBLEActivity;
- (void)setMyriadDuckingEnabled:(BOOL)a0;
- (id)myriadDeviceGroup;
- (void)_preferencesDidChangeExternally;
- (void)setMyriadDeviceClass:(unsigned char)a0;
- (void)setMyriadDeviceSlowdown:(double)a0;
- (BOOL)myriadServerProvisioning;
- (double)myriadMaxNoOperationDelay;
- (void)setMyriadDeviceDelay:(double)a0;
- (void)setMyriadTestDeviceDelay:(double)a0;
- (double)myriadDeviceDelay;
- (void)setMyriadMaxNoOperationDelay:(double)a0;
- (BOOL)myriadDuckingEnabled;
- (BOOL)myriadServerHasProvisioned;
- (double)myriadDeviceTrumpDelay;
- (void)setMyriadCoordinationEnabled:(BOOL)a0;
- (double)myriadDeviceVTEndTimeDistanceThreshold;
- (BOOL)ignoreMyriadPlatformBias;
- (void).cxx_destruct;
- (BOOL)myriadShouldIgnoreAdjustedBoost;
- (double)myriadTestDeviceDelay;
- (void)setIgnoreMyriadAdjustedBoost:(BOOL)a0;
- (float)myriadDeviceAdjust;
- (void)setMyriadServerHasProvisioned:(BOOL)a0;
- (id)init;
- (id)myriadMonitorTimeOutInterval;
- (unsigned char)myriadDeviceClass;
- (void)setMyriadLastWin;
- (void)setMyriadConstantGoodness:(int)a0;
- (void)setMyriadDeviceAdjust:(float)a0;
- (BOOL)myriadCoordinationEnabledForAccessoryLogging;
- (void)setMyriadServerProvisioning:(BOOL)a0;
- (void)setIgnoreMyriadPlatformBias:(BOOL)a0;
- (void)setMyriadDeviceGroup:(id)a0;
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)a0;
- (id)myriadLastWin;

@end

@interface GKSConnectivitySettings : NSObject

+ (double)getRemoteMediaStallTimeout;
+ (int)getNewSessionJoiningInterval;
+ (double)getLongTermValueWeightA;
+ (int)getRateControllerType;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (int)getDecryptionTimeoutInterval;
+ (id)getAddressForService:(id)a0;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (double)getLongTermValueWeightC;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (int)getLongTermHistoryLength;
+ (id)getClientOption:(id)a0;
+ (double)getShortTermValueWeightA;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (id)getAllSettings;
+ (void)setServerAddresses:(id)a0;
+ (int)getAdaptiveLearningState;
+ (double)getAdjustmentFactorA;
+ (double)getAdjustmentFactorB;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (unsigned char)getAbTestingState;
+ (double)getLongTermValueWeightB;
+ (int)getShortTermHistoryLength;
+ (int)getDecryptionMKMRecoveryInterval;
+ (BOOL)supportsRedAudio;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (BOOL)supportsHEVCEncoding;
+ (double)getShortTermValueWeightC;
+ (void)setClientOptions:(id)a0;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (BOOL)supportiRATRecommendation;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (double)getAdjustmentFactorC;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (BOOL)supportsEVSCodec;
+ (double)getAdaptiveLearningB;
+ (double)getAdaptiveLearningA;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (double)getShortTermValueWeightB;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;

- (void)dealloc;
- (id)init;

@end

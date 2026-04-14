@interface GKSConnectivitySettings : NSObject

+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (BOOL)supportsEVSCodec;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (int)getDecryptionTimeoutInterval;
+ (double)getShortTermValueWeightC;
+ (void)setClientOptions:(id)a0;
+ (int)getNewSessionJoiningInterval;
+ (double)getRemoteMediaStallTimeout;
+ (double)getAdjustmentFactorC;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (int)getAdaptiveLearningState;
+ (int)getShortTermHistoryLength;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (int)getNATTypeFromCarrierBundle;
+ (id)getClientOption:(id)a0;
+ (double)getLongTermValueWeightB;
+ (unsigned char)getAbTestingState;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (double)getShortTermValueWeightA;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (double)getLongTermValueWeightC;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getLongTermHistoryLength;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (BOOL)supportsHEVCEncoding;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (id)getAddressForService:(id)a0;
+ (BOOL)supportsRedAudio;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getAdjustmentFactorB;
+ (void)setServerAddresses:(id)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (int)getRateControllerType;
+ (double)getAdaptiveLearningA;
+ (double)getAdaptiveLearningB;
+ (double)getAdjustmentFactorA;
+ (double)getLongTermValueWeightA;
+ (BOOL)supportiRATRecommendation;
+ (double)getShortTermValueWeightB;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (id)getAllSettings;
+ (void)setAddress:(id)a0 forService:(id)a1;

- (void)dealloc;
- (id)init;

@end

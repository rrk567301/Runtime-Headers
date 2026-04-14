@interface GKSConnectivitySettings : NSObject

+ (BOOL)supportsRedAudio;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getNewSessionJoiningInterval;
+ (double)getShortTermValueWeightC;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (int)getDecryptionMKMRecoveryInterval;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (double)getShortTermValueWeightB;
+ (int)getDecryptionTimeoutInterval;
+ (double)getLongTermValueWeightA;
+ (BOOL)supportsEVSCodec;
+ (double)getAdjustmentFactorB;
+ (BOOL)supportiRATRecommendation;
+ (double)getShortTermValueWeightA;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (id)getAddressForService:(id)a0;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (unsigned char)getAbTestingState;
+ (int)getNATTypeFromCarrierBundle;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (id)getClientOption:(id)a0;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (double)getAdaptiveLearningA;
+ (void)setServerAddresses:(id)a0;
+ (double)getAdjustmentFactorC;
+ (int)getRateControllerType;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (void)setClientOptions:(id)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (double)getAdaptiveLearningB;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (double)getLongTermValueWeightC;
+ (int)getLongTermHistoryLength;
+ (BOOL)supportsHEVCEncoding;
+ (int)getAdaptiveLearningState;
+ (double)getAdjustmentFactorA;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (id)getAllSettings;
+ (double)getLongTermValueWeightB;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (double)getRemoteMediaStallTimeout;
+ (int)getShortTermHistoryLength;

- (id)init;
- (void)dealloc;

@end

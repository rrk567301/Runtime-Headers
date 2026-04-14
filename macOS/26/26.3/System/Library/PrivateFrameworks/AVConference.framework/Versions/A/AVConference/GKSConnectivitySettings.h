@interface GKSConnectivitySettings : NSObject

+ (id)getClientOption:(id)a0;
+ (int)getDecryptionMKMRecoveryInterval;
+ (BOOL)supportiRATRecommendation;
+ (double)getAdaptiveLearningB;
+ (void)setClientOptions:(id)a0;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (double)getLongTermValueWeightC;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (unsigned char)getAbTestingState;
+ (double)getShortTermValueWeightA;
+ (double)getAdjustmentFactorC;
+ (double)getLongTermValueWeightA;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getAdaptiveLearningState;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (int)getRateControllerType;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getRemoteMediaStallTimeout;
+ (double)getAdjustmentFactorB;
+ (BOOL)supportsRedAudio;
+ (id)getAddressForService:(id)a0;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (int)getNewSessionJoiningInterval;
+ (id)getAllSettings;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (double)getShortTermValueWeightB;
+ (int)getShortTermHistoryLength;
+ (double)getAdjustmentFactorA;
+ (void)setServerAddresses:(id)a0;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (BOOL)supportsEVSCodec;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (int)getDecryptionTimeoutInterval;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getShortTermValueWeightC;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getLongTermHistoryLength;
+ (BOOL)supportsHEVCEncoding;
+ (double)getLongTermValueWeightB;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (double)getAdaptiveLearningA;
+ (int)getKeepAliveTimeoutFromCarrierBundle;

- (id)init;
- (void)dealloc;

@end

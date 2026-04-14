@interface GKSConnectivitySettings : NSObject

+ (int)getLongTermHistoryLength;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 exceptionKey:(id)a1 userDefaultKey:(struct __CFString { } *)a2 featureFlagDomain:(char *)a3 featureFlagName:(char *)a4;
+ (double)getAdaptiveLearningA;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3 normalizedRandom:(double)a4;
+ (void)setServerAddresses:(id)a0;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (int)getAdaptiveLearningState;
+ (id)getAllSettings;
+ (double)getShortTermValueWeightB;
+ (int)getDecryptionMKMRecoveryInterval;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (int)getNewSessionJoiningInterval;
+ (id)getAddressForService:(id)a0;
+ (id)readStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getShortTermValueWeightA;
+ (id)getClientOption:(id)a0;
+ (BOOL)supportsEVSCodec;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (BOOL)supportsHEVCEncoding;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (double)getLongTermValueWeightB;
+ (BOOL)supportiRATRecommendation;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (int)getRateControllerType;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (int)getShortTermHistoryLength;
+ (double)getAdjustmentFactorC;
+ (void)setClientOptions:(id)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (int)getDecryptionTimeoutInterval;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (unsigned char)getAbTestingState;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (BOOL)supportsRedAudio;
+ (BOOL)isFeatureEnabledForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (double)getShortTermValueWeightC;
+ (double)getAdjustmentFactorB;
+ (double)getRemoteMediaStallTimeout;
+ (double)getLongTermValueWeightA;
+ (double)getAdaptiveLearningB;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (int)getNATTypeFromCarrierBundle;
+ (double)getLongTermValueWeightC;
+ (BOOL)isFeatureDisabledByExceptionKey:(id)a0;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (double)getAdjustmentFactorA;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;

- (id)init;
- (void)dealloc;

@end

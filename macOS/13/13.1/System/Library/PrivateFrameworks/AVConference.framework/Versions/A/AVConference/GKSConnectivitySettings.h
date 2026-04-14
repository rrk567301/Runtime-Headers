@interface GKSConnectivitySettings : NSObject

+ (void)setClientOptions:(id)a0;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (void)setServerAddresses:(id)a0;
+ (id)getClientOption:(id)a0;
+ (id)getAddressForService:(id)a0;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (id)getAllSettings;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (BOOL)supportsHEVCEncoding;
+ (BOOL)supportsEVSCodec;
+ (BOOL)supportsRedAudio;
+ (BOOL)supportiRATRecommendation;
+ (int)getRateControllerType;
+ (int)getDecryptionTimeoutInterval;
+ (int)getDecryptionMKMRecoveryInterval;
+ (int)getNewSessionJoiningInterval;
+ (int)getAdaptiveLearningState;
+ (int)getShortTermHistoryLength;
+ (int)getLongTermHistoryLength;
+ (double)getAdaptiveLearningA;
+ (double)getAdjustmentFactorA;
+ (double)getShortTermValueWeightA;
+ (double)getLongTermValueWeightA;
+ (double)getAdaptiveLearningB;
+ (double)getAdjustmentFactorB;
+ (double)getShortTermValueWeightB;
+ (double)getLongTermValueWeightB;
+ (double)getAdjustmentFactorC;
+ (double)getShortTermValueWeightC;
+ (double)getLongTermValueWeightC;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (unsigned char)getAbTestingState;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (double)getRemoteMediaStallTimeout;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (BOOL)getFeatureFlagForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;

- (void)dealloc;
- (id)init;

@end

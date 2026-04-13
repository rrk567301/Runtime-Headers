@interface MLCPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
+ (id)aneSaveGraphPartitioningConfig;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUsageUnsupported;
+ (id)mpsGraphConvolutionEnvVariable;
+ (id)seedEnvVariable;
+ (long long)randomSeed;
+ (BOOL)isRNGSeeded;
+ (id)aneSubType;
+ (int)aneSubTypeVersion;
+ (id)aneKeepPlistEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (BOOL)aneUsageUnsupported;
+ (id)osVersion;
+ (id)bootArgs;
+ (void)setRandomSeedTo:(id)a0;
+ (id)getRandomSeed;
+ (BOOL)isAnePlistKept;

@end

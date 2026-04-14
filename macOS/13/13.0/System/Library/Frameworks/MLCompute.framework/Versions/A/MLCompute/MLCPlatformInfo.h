@interface MLCPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)buildVersion;
+ (BOOL)gpuUsageUnsupported;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)multiGPUUsageUnsupported;
+ (BOOL)aneUsageUnsupported;
+ (id)osVersion;
+ (id)bootArgs;
+ (id)mpsGraphConvolutionEnvVariable;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (id)seedEnvVariable;
+ (BOOL)isRNGSeeded;
+ (long long)randomSeed;
+ (void)setRandomSeedTo:(id)a0;
+ (id)getRandomSeed;
+ (id)aneSubType;
+ (int)aneSubTypeVersion;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (id)aneKeepPlistEnvVariable;
+ (BOOL)isAnePlistKept;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)aneSaveGraphPartitioningConfig;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;

@end

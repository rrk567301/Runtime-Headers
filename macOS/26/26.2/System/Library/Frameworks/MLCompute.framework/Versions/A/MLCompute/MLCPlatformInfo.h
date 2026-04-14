@interface MLCPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)bootArgs;
+ (id)osVersion;
+ (id)buildVersion;
+ (id)aneSubType;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)seedEnvVariable;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (id)aneKeepPlistEnvVariable;
+ (id)aneSaveGraphPartitioningConfig;
+ (int)aneSubTypeVersion;
+ (BOOL)aneUsageUnsupported;
+ (id)getRandomSeed;
+ (BOOL)gpuUsageUnsupported;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:(BOOL)a0;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (BOOL)isAnePlistKept;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (BOOL)isRNGSeeded;
+ (id)mpsGraphConvolutionEnvVariable;
+ (BOOL)multiGPUUsageUnsupported;
+ (long long)randomSeed;
+ (void)setRandomSeedTo:(id)a0;

@end

@interface MLCPlatformInfo : NSObject

+ (id)buildVersion;
+ (char)isInternalBuild;
+ (char)isAneGraphPartitioningConfigSet;
+ (id)seedEnvVariable;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (id)aneKeepPlistEnvVariable;
+ (id)aneSaveGraphPartitioningConfig;
+ (id)aneSubType;
+ (int)aneSubTypeVersion;
+ (char)aneUsageUnsupported;
+ (id)bootArgs;
+ (id)getRandomSeed;
+ (char)gpuUsageUnsupported;
+ (char)gpuUsageUnsupportedIncludingLowPower:(char)a0;
+ (char)gpuUseMPSGraphConvolution;
+ (char)isAnePlistKept;
+ (char)isAneSaveGraphPartitioningConfigSet;
+ (char)isAneSubTypeVersionGreaterThanOrEqualTo:(unsigned long long)a0;
+ (char)isRNGSeeded;
+ (id)mpsGraphConvolutionEnvVariable;
+ (char)multiGPUUsageUnsupported;
+ (id)osVersion;
+ (long long)randomSeed;
+ (void)setRandomSeedTo:(id)a0;

@end

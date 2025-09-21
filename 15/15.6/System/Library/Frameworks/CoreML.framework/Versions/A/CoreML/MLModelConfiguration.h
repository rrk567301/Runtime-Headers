@class MLOptimizationHints, NSString, NSDictionary, NSURL;
@protocol MTLDevice;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long _experimentalMLE5EngineUsage;
    char _usePrecompiledE5Bundle;
    long long _experimentalMLE5BNNSGraphBackendUsage;
    long long _experimentalMLE5BNNSGraphBackendUsageMultiSegment;
    NSDictionary *_e5rtDynamicCallableFunctions;
    NSDictionary *_e5rtMutableMILWeightURLs;
    unsigned long long _e5rtComputeDeviceTypeMask;
    NSString *_e5rtCustomANECompilerOptions;
    char _serializesMILTextForDebugging;
    char _specializationUsesMPSGraphExecutable;
    long long _experimentalMLProgramEncryptedCacheUsage;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long experimentalMLE5EngineUsage;
@property (nonatomic) char usePrecompiledE5Bundle;
@property (nonatomic) long long experimentalMLE5BNNSGraphBackendUsage;
@property (nonatomic) long long experimentalMLE5BNNSGraphBackendUsageMultiSegment;
@property (copy, nonatomic) NSDictionary *e5rtDynamicCallableFunctions;
@property (copy, nonatomic) NSDictionary *e5rtMutableMILWeightURLs;
@property (nonatomic) unsigned long long e5rtComputeDeviceTypeMask;
@property (copy, nonatomic) NSString *e5rtCustomANECompilerOptions;
@property (nonatomic) char serializesMILTextForDebugging;
@property (nonatomic) char specializationUsesMPSGraphExecutable;
@property (nonatomic) long long experimentalMLProgramEncryptedCacheUsage;
@property char allowBackgroundGPUComputeSetting;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) long long predictionConcurrencyHint;
@property char trainWithMLCompute;
@property (nonatomic) char useWatchSPIForScribble;
@property (nonatomic) char allowFloat16AccumulationOnGPU;
@property char allowLowPrecisionAccumulationOnGPU;
@property (nonatomic) char allowBackgroundGPUCompute;
@property (retain, nonatomic) id<MTLDevice> preferredMTLDevice;
@property (retain, nonatomic) id<MTLDevice> preferredMetalDevice;
@property (nonatomic) char enableTestVectorMode;
@property (retain) NSDictionary *parameters;
@property (retain) NSURL *rootModelURL;
@property (nonatomic) long long profilingOptions;
@property (nonatomic) char usePreloadedKey;
@property (retain, nonatomic) NSString *parentModelName;
@property (nonatomic) char allowsInstrumentation;
@property (nonatomic) char preparesLazily;
@property (copy) NSString *modelDisplayName;
@property long long computeUnits;
@property (copy, nonatomic) MLOptimizationHints *optimizationHints;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bnnsGraphBackendUsageToString:(long long)a0;
- (id)computeUnitsToString:(long long)a0;
- (id)experimentalMLE5EngineUsageToString:(long long)a0;
- (id)experimentalMLProgramEncryptedCacheUsageToString:(long long)a0;
- (id)initWithComputeUnits:(long long)a0;
- (char)isEqualToModelConfiguration:(id)a0;
- (id)neuralEngineCompilerOptions;
- (char)usesCompileTimeMPSGraphTypeInferenceForModelVersion:(id)a0;

@end

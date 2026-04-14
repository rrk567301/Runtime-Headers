@class NSString, NSDictionary, MPSGraphExecutableConstantData, NSObject;
@protocol OS_dispatch_queue;

@interface MPSGraphCompilationDescriptor : MPSGraphObject <NSCopying> {
    BOOL _enableShapeShifterCache;
    unsigned long long _shapeShifterCacheThreads;
    BOOL _disableShapeFolding;
    unsigned long long _shapeShifterTILevel;
}

@property (nonatomic) BOOL enableShapeShifterCache;
@property (nonatomic) unsigned long long shapeShifterCacheThreads;
@property (nonatomic) BOOL disableShapeFolding;
@property (nonatomic) unsigned long long shapeShifterTILevel;
@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL enableANEFWToFWSignal;
@property BOOL enableANELateLatch;
@property BOOL enableANECHWRankPromotion;
@property BOOL printANEPlacementAnalysis;
@property (nonatomic) unsigned long long preferredDevice;
@property (nonatomic) unsigned long long allowedComputeDevices;
@property (retain) NSString *entryFunctionName;
@property (retain) MPSGraphExecutableConstantData *constantData;
@property (nonatomic) BOOL enableParallelEncode;
@property unsigned long long maximumNumberOfParallelEncodingRegions;
@property unsigned long long minimumNumberOfOpsInParallelRegion;
@property (nonatomic) BOOL enableMLIRDiagnostics;
@property (nonatomic) BOOL enableShapeEquivalence;
@property (nonatomic) BOOL enableShapeShifter;
@property (nonatomic) BOOL verifyTypeInference;
@property (nonatomic) BOOL enableANECValidationWorkflow;
@property (nonatomic) unsigned long long layoutConversionPassConfig;
@property (nonatomic) BOOL enableCompileResourcesForPackage;
@property (copy) NSDictionary *inputShapeRanges;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) BOOL waitForCompilationCompletion;
@property (copy) id /* block */ compilationCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long optimizationProfile;
@property (retain) NSDictionary *callables;
@property unsigned long long reducedPrecisionFastMath;

+ (id)descriptorWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualTo:(id)a0;
- (id)toDictionary;
- (void)disableTypeInference;
- (void)enableGPUQuantOps;
- (void)convertLayoutToNHWC;
- (void)disableGPUQuantOps;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (void)enableLayoutConversion:(BOOL)a0 dataChannelsLast:(BOOL)a1 weightsChannelsLast:(BOOL)a2;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; struct NamedAttribute *x1; struct { struct NamedAttribute *x0; } x2; })getNamedAttrArray:(void *)a0 deviceDescriptor:(id)a1;
- (BOOL)isEqualForModuleTo:(id)a0;

@end

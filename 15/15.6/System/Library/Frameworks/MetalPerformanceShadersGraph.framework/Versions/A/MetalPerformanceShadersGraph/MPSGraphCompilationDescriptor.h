@class NSString, NSDictionary, MPSGraphExecutableConstantData, NSObject;
@protocol OS_dispatch_queue;

@interface MPSGraphCompilationDescriptor : MPSGraphObject <NSCopying>

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property unsigned long long reducedPrecisionFastMath;
@property char enableANEFWToFWSignal;
@property char enableANELateLatch;
@property char printANEPlacementAnalysis;
@property (nonatomic) unsigned long long preferredDevice;
@property (nonatomic) unsigned long long allowedComputeDevices;
@property (retain) NSString *entryFunctionName;
@property (retain) MPSGraphExecutableConstantData *constantData;
@property (nonatomic) char enableParallelEncode;
@property unsigned long long maximumNumberOfParallelEncodingRegions;
@property unsigned long long minimumNumberOfOpsInParallelRegion;
@property (nonatomic) char enableMLIRDiagnostics;
@property (nonatomic) char enableShapeEquivalence;
@property (nonatomic) char enableANECValidationWorkflow;
@property (nonatomic) unsigned long long layoutConversionPassConfig;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) char waitForCompilationCompletion;
@property (copy) id /* block */ compilationCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long optimizationProfile;
@property (retain) NSDictionary *callables;

+ (id)descriptorWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)toDictionary;
- (void)disableTypeInference;
- (void)enableGPUQuantOps;
- (void)disableGPUQuantOps;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (void)enableLayoutConversion:(char)a0 dataChannelsLast:(char)a1 weightsChannelsLast:(char)a2;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; struct NamedAttribute *x1; struct __compressed_pair<mlir::NamedAttribute *, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; } x2; })getNamedAttrArray:(void *)a0 device:(id)a1;
- (char)isEqualForModuleTo:(id)a0;

@end

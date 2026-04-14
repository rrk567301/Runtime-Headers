@class NSString, NSDictionary, MPSGraphExecutableConstantData, NSObject;
@protocol OS_dispatch_queue;

@interface MPSGraphCompilationDescriptor : MPSGraphObject <NSCopying>

@property unsigned long long compilerOptions;
@property unsigned long long aneCompilerSpatialSplitting;
@property BOOL enableANEFWToFWSignal;
@property BOOL enableANELateLatch;
@property BOOL printANEPlacementAnalysis;
@property (nonatomic) unsigned long long preferredDevice;
@property (nonatomic) unsigned long long allowedComputeDevices;
@property (retain) NSDictionary *callables;
@property (retain) NSString *entryFunctionName;
@property (retain) MPSGraphExecutableConstantData *constantData;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) BOOL waitForCompilationCompletion;
@property (copy) id /* block */ compilationCompletionHandler;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long optimizationProfile;

+ (id)descriptorWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (id)toDictionary;
- (void)disableTypeInference;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (void)enableGPUQuantOps;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; struct NamedAttribute *x1; struct __compressed_pair<mlir::NamedAttribute *, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute *x0; } x2; })getNamedAttrArray:(void *)a0 device:(id)a1;
- (BOOL)isEqualForModuleTo:(id)a0;

@end

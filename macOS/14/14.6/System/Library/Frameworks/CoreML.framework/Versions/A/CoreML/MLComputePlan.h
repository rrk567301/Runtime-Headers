@class NSDictionary, MLModelConfiguration, MLModelStructure;

@interface MLComputePlan : NSObject

@property (readonly, copy, nonatomic) NSDictionary *computeDevicesBySupportedComputeUnits;
@property (readonly, copy, nonatomic) NSDictionary *executionScheduleByModelStructurePath;
@property (readonly, nonatomic) long long modelAssetType;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) MLModelStructure *modelStructure;

+ (id)computePlanLoadingQueue;
+ (id)computePlanOfModelAsset:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)computePlanOfModelAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)computePlanOfModelStructure:(id)a0 modelAsset:(id)a1 configuration:(id)a2 error:(id *)a3;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadModelAsset:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)computeDeviceUsageForMLProgramOperation:(id)a0;
- (id)computeDeviceUsageForNeuralNetworkLayer:(id)a0;
- (id)estimatedCostOfMLProgramOperation:(id)a0;
- (id)initWithModelStructure:(id)a0 modelAssetType:(long long)a1 executionSchedule:(id)a2 configuration:(id)a3;

@end

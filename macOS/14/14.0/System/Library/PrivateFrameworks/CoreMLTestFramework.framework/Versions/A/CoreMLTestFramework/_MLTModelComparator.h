@class _MLTModelComparatorConfiguration;

@interface _MLTModelComparator : NSObject

@property (retain, nonatomic) _MLTModelComparatorConfiguration *config;

+ (id)defaultMetricsForFeatureType:(long long)a0;
+ (id)exposedInputsForModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)augmentTestInput:(id)a0 WithOutputsFromModel:(id)a1 error:(id *)a2;
- (BOOL)compareModelsAddingMLProgram:(BOOL)a0 assertModelIsMLProgram:(BOOL)a1 inMemoryModel:(BOOL)a2 error:(id *)a3;
- (BOOL)compareModelsAddingMLProgram:(BOOL)a0 assertModelIsMLProgram:(BOOL)a1 inMemoryModel:(BOOL)a2 experimentalMLE5EngineUsage:(long long)a3 error:(id *)a4;
- (id)getImagesForModel:(id)a0 error:(id *)a1;
- (id)groundTruthFromSource:(BOOL)a0 experimentalMLE5EngineUsage:(long long)a1 error:(id *)a2;

@end

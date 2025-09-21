@class _MLTModelComparatorConfiguration;

@interface _MLTModelComparator : NSObject

@property (retain, nonatomic) _MLTModelComparatorConfiguration *config;

+ (id)defaultMetricsForFeatureType:(long long)a0;
+ (id)exposedInputsForModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (char)augmentTestInput:(id)a0 WithOutputsFromModel:(id)a1 error:(id *)a2;
- (char)compareModelsAddingMLProgram:(char)a0 assertModelIsMLProgram:(char)a1 inMemoryModel:(char)a2 inMemoryModelBlobFileResolutionOption:(long long)a3 error:(id *)a4;
- (char)compareModelsAddingMLProgram:(char)a0 assertModelIsMLProgram:(char)a1 inMemoryModel:(char)a2 inMemoryModelBlobFileResolutionOption:(long long)a3 experimentalMLE5EngineUsage:(long long)a4 error:(id *)a5;
- (id)getImagesForModel:(id)a0 error:(id *)a1;
- (id)groundTruthFromSource:(char)a0 inMemoryModelBlobFileResolutionOption:(long long)a1 experimentalMLE5EngineUsage:(long long)a2 error:(id *)a3;

@end

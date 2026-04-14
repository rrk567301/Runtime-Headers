@class _MLTModelComparatorConfiguration;

@interface _MLTModelComparator : NSObject

@property (retain, nonatomic) _MLTModelComparatorConfiguration *config;

+ (id)exposedInputsForModel:(id)a0;
+ (id)defaultMetricsForFeatureType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)augmentTestInput:(id)a0 WithOutputsFromModel:(id)a1 error:(id *)a2;
- (id)groundTruthFromSource:(BOOL)a0 error:(id *)a1;
- (BOOL)compareModelsAddingMLProgram:(BOOL)a0 assertModelIsMLProgram:(BOOL)a1 inMemoryModel:(BOOL)a2 error:(id *)a3;
- (id)getImagesForModel:(id)a0 error:(id *)a1;

@end

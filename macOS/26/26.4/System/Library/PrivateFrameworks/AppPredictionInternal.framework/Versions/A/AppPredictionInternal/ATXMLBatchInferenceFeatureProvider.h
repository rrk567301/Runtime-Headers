@interface ATXMLBatchInferenceFeatureProvider : NSObject <MLBatchProvider>

@property (nonatomic) struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *__begin_; struct ATXPredictionItem *__end_; struct { struct ATXPredictionItem *__cap_; } ; } featureVectors;
@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithFeatureVectors:(void *)a0;

@end

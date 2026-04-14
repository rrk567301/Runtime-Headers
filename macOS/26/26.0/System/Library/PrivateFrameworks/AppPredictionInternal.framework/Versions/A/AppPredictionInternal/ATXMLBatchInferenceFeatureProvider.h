@interface ATXMLBatchInferenceFeatureProvider : NSObject <MLBatchProvider>

@property (nonatomic) struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *__begin_; struct ATXPredictionItem *__end_; struct ATXPredictionItem *__cap_; } featureVectors;
@property (readonly, nonatomic) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)initWithFeatureVectors:(void *)a0;

@end

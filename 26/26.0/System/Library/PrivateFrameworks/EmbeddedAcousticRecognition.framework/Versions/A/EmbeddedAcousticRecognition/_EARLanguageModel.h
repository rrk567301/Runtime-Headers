@interface _EARLanguageModel : NSObject {
    struct vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> { void *__begin_; void *__end_; void *__cap_; } _dataSources;
}

@property (readonly, nonatomic) float totalWeight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataSource:(id)a0 weight:(float)a1;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* block */)a0;

@end

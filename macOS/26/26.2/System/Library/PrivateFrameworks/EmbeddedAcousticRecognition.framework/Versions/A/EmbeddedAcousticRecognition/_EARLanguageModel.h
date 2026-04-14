@interface _EARLanguageModel : NSObject {
    struct vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _dataSources;
}

@property (readonly, nonatomic) float totalWeight;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addDataSource:(id)a0 weight:(float)a1;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* block */)a0;

@end

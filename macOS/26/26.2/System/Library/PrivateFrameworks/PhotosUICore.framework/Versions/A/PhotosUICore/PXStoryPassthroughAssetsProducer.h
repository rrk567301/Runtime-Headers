@class PXAssetsDataSourceManager;

@interface PXStoryPassthroughAssetsProducer : NSObject <PXStoryAssetsProducer>

@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (id)requestAssetsWithOptions:(unsigned long long)a0 storyQueue:(id)a1 resultHandler:(id /* block */)a2;

@end

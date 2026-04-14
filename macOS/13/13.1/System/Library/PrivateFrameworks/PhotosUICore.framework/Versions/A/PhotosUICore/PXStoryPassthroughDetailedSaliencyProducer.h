@protocol PXStorySaliencyDataSource;

@interface PXStoryPassthroughDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer>

@property (readonly, nonatomic) id<PXStorySaliencyDataSource> detailedSaliency;

- (id)init;
- (void).cxx_destruct;
- (id)requestDetailedSaliencyForDisplayAssets:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)initWithDetailedSaliency:(id)a0;

@end

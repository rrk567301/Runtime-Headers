@protocol PXStorySaliencyDataSource;

@interface PXStoryPassthroughDetailedSaliencyProducer : NSObject <PXStoryDetailedSaliencyProducer>

@property (readonly, nonatomic) id<PXStorySaliencyDataSource> detailedSaliency;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDetailedSaliency:(id)a0;
- (id)requestDetailedSaliencyForDisplayAssets:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end

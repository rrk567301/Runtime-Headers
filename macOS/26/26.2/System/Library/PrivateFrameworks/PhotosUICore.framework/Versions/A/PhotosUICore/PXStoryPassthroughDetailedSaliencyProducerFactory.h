@protocol PXStoryDetailedSaliencyProducer;

@interface PXStoryPassthroughDetailedSaliencyProducerFactory : NSObject <PXStoryDetailedSaliencyProducerFactory>

@property (retain, nonatomic) id<PXStoryDetailedSaliencyProducer> detailedSaliencyProducer;

- (void).cxx_destruct;
- (id)init;
- (id)detailedSaliencyProducerForConfiguration:(id)a0;
- (id)initWithDetailedSaliencyProducer:(id)a0;

@end

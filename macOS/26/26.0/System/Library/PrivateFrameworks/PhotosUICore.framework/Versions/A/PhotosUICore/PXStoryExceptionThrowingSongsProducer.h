@interface PXStoryExceptionThrowingSongsProducer : NSObject <PXStorySongsProducer>

@property (nonatomic) unsigned long long logContext;

- (id)init;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end

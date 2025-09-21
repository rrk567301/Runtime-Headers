@class NSArray;
@protocol SKDTrackingEvent;

@interface SKDBaseItemProcessingJob : SKDBaseJob {
    NSArray *_fetchAttributes;
    id<SKDTrackingEvent> _currentTrackingEvent;
}

- (id)fetchAttributes;
- (void)setFetchAttributes:(id)a0;
- (void).cxx_destruct;
- (void)endBatch;
- (id)initWithName:(id)a0 version:(id)a1 pipelines:(id)a2;
- (id)currentTrackingEvent;
- (void)startBatch;

@end

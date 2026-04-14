@class NSArray;
@protocol SKDTrackingEvent;

@interface SKDBaseItemProcessingJob : SKDBaseJob {
    NSArray *_fetchAttributes;
    id<SKDTrackingEvent> _currentTrackingEvent;
}

- (void)setFetchAttributes:(id)a0;
- (id)fetchAttributes;
- (void).cxx_destruct;
- (void)endBatch;
- (id)initWithName:(id)a0 version:(id)a1 pipelines:(id)a2;
- (id)currentTrackingEvent;
- (void)startBatch;

@end

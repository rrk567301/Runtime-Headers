@class NSDate;
@protocol BPSPublisher;

@interface BPSDebounce : BPSPublisher

@property (retain, nonatomic) id lastEvent;
@property (retain, nonatomic) NSDate *lastArrivalTimestamp;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double dueTime;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithUpstream:(id)a0 for:(double)a1 getTimestamp:(id /* block */)a2;

@end

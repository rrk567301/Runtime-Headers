@class NSDate;
@protocol BPSPublisher;

@interface BPSThrottle : BPSPublisher

@property (retain, nonatomic) id intervalEvent;
@property (retain, nonatomic) NSDate *nextIntervalBoundary;
@property (retain, nonatomic) NSDate *startTimestamp;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) char latest;
@property (readonly, nonatomic) id /* block */ getTimestamp;

- (void).cxx_destruct;
- (void)reset;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (id)initWithUpstream:(id)a0 interval:(double)a1 latest:(char)a2 getTimestamp:(id /* block */)a3;

@end

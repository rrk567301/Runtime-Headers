@class NSNumber;

@interface AMSMetricsLoadURLEventTimingData : NSObject

@property (copy) NSNumber *earliestTimestamp;
@property BOOL clampingEnabled;

- (void).cxx_destruct;
- (void)findEarliestTimestamp:(id)a0;
- (id)initWithTimingData:(id)a0;
- (id)initWithTimingData:(id)a0 clampingEnabled:(BOOL)a1;
- (id)normalizedTimestampIfEnabled:(id)a0;

@end

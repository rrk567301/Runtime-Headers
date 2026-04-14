@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void)start;
- (void)finish;
- (void).cxx_destruct;
- (id)eventPayload;
- (id)durationData;

@end

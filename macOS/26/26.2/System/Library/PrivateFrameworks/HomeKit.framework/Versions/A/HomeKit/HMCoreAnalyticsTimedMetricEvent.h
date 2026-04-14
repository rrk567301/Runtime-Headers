@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void)finish;
- (void).cxx_destruct;
- (void)start;
- (id)eventPayload;
- (id)durationData;

@end

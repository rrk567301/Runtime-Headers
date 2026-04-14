@class NSNumber, NSDate;

@interface HMCoreAnalyticsTimedMetricEvent : HMCoreAnalyticsMetricEvent

@property (copy) NSDate *startedDate;
@property (copy) NSDate *finishedDate;
@property (readonly) NSNumber *duration;

- (void)finish;
- (void).cxx_destruct;
- (id)eventPayload;
- (void)start;
- (id)durationData;

@end

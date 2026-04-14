@interface IMPageAMSMetricsEvent : IMAMSMetricsEvent

@property (nonatomic) double pageRenderTime;

- (id)init;
- (id)millisecondsFromTimeInterval:(double)a0;
- (double)timeIntervalFromMilliseconds:(id)a0;

@end

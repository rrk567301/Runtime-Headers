@class NSString, NSDictionary, NSNumber;

@interface HMDHAPMetricsReachabilityTimerLateEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *expectedDuration;


@end

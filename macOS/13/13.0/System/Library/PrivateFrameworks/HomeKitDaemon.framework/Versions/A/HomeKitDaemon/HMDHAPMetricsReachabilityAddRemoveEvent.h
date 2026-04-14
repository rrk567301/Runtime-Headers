@class NSString, NSDictionary, NSNumber;

@interface HMDHAPMetricsReachabilityAddRemoveEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) unsigned long long addRemoveEvent;
@property (readonly, nonatomic) NSNumber *linkType;


@end

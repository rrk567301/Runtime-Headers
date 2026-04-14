@class NSString, NSDictionary, NSError;

@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property unsigned long long coreUtilsLatency;
@property unsigned long long coreUtilsDestinationCount;
@property BOOL coordinationPathTriggered;
@property unsigned long long coordinationLatency;
@property (copy) NSError *coordinationError;
@property unsigned long long coordinationMode;
@property unsigned long long numHomePodsWithDoorbellChimeEnabled;


@end

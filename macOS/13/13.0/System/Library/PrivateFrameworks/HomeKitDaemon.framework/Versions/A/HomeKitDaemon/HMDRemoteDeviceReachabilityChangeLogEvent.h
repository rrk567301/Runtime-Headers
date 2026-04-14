@class NSString, NSDictionary;

@interface HMDRemoteDeviceReachabilityChangeLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long reason;
@property (readonly) BOOL reachable;
@property (readonly) BOOL targetSupportsIDSPresence;


- (id)initWithReason:(unsigned long long)a0 reachable:(BOOL)a1 targetSupportsIDSPresence:(BOOL)a2;

@end

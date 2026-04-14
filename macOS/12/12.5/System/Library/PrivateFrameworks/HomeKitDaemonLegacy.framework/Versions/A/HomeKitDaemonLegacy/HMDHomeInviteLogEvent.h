@class NSString, NSDictionary;

@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) BOOL received;
@property (readonly, nonatomic) BOOL filtered;
@property (readonly, nonatomic) BOOL suppressedNotification;
@property (readonly, nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL declined;
@property (readonly, nonatomic) BOOL ignored;
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL isFMFDevice;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

@end

@class NSString, NSDictionary;

@interface HMDUnexpectedNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (id)initWithCount:(long long)a0;

@end

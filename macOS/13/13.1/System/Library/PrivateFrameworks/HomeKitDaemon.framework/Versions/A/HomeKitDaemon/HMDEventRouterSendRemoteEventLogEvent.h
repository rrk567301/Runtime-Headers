@class NSString, NSDictionary;

@interface HMDEventRouterSendRemoteEventLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) unsigned long long sourceDeviceType;
@property (readonly, nonatomic) unsigned long long destinationDeviceType;
@property (readonly, nonatomic) BOOL isCachedEvent;
@property (readonly, nonatomic) unsigned long long responseMessageType;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

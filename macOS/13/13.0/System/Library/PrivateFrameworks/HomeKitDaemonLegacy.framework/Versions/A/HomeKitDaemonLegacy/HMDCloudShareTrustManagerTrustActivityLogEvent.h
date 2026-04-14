@class NSString, NSDictionary, NSNumber;

@interface HMDCloudShareTrustManagerTrustActivityLogEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSNumber *trustActivityType;
@property (readonly, copy) NSNumber *privilege;
@property (readonly, copy) NSNumber *isPrimaryResident;


@end

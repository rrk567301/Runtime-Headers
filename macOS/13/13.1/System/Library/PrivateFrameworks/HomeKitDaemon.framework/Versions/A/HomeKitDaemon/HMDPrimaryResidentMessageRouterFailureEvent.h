@class NSString, NSNumber, NSDictionary;

@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSString *messageName;
@property (readonly, copy) NSNumber *failureType;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithMessageName:(id)a0 failureType:(long long)a1;

@end

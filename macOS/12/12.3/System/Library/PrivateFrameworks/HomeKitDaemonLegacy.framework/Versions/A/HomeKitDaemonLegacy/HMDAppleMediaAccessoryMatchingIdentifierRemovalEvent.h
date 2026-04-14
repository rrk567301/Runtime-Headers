@class NSNumber, NSString, NSDictionary;

@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSNumber *removalCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithRemovalCount:(long long)a0;

@end

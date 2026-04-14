@class NSString, NSDictionary;

@interface HMDLegacyPrimaryElectionLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (copy) NSString *reason;
@property (copy) NSString *criteria;
@property unsigned long long availableResidentCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


@end

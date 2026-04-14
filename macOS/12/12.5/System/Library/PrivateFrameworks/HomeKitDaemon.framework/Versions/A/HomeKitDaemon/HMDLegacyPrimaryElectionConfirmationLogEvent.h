@class NSString, NSDictionary;

@interface HMDLegacyPrimaryElectionConfirmationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property unsigned long long availableResidentCount;
@property unsigned long long residentsRespondedCount;
@property (copy) NSString *criteria;
@property BOOL changedPrimary;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)init;
- (void).cxx_destruct;

@end

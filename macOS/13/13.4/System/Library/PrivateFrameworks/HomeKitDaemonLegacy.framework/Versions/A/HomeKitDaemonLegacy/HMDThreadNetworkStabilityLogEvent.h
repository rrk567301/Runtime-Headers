@class NSString, NSDictionary;

@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numAdvertisedBRs;
@property (readonly, nonatomic) unsigned long long numAppleBRs;
@property (readonly, nonatomic) unsigned long long numThirdPartyBRs;
@property (readonly, nonatomic) unsigned long long numThreadNetworks;
@property (readonly, nonatomic) unsigned long long maxSimuIPPrefixesDetected;
@property (readonly, nonatomic) unsigned long long txTotal;
@property (readonly, nonatomic) unsigned long long txSuccess;
@property (readonly, nonatomic) unsigned long long txDelayAvg;
@property (readonly, nonatomic) unsigned long long rxTotal;
@property (readonly, nonatomic) unsigned long long rxSuccess;
@property (readonly, nonatomic) unsigned long long reportDuration;
@property (readonly, nonatomic) unsigned long long threadNetworkUptime;
@property (readonly, nonatomic) unsigned long long threadNetworkDowntime;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) NSString *topReadWriteError;
@property (readonly, nonatomic) NSString *topSessionError;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end

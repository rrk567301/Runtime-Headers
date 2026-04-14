@class NSString, NSDictionary;

@interface HMDCoordinationPrimaryElectionDetailedLogEvent : HMDCoordinationPrimaryElectionLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long electionTriggerReason;
@property (readonly) unsigned long long confirmationCriteria;
@property (readonly) BOOL meshAndPrimaryCandidateCountEqual;
@property (readonly) BOOL previousPrimaryInMesh;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithIsPrimary:(BOOL)a0 didChangePrimary:(BOOL)a1 electionTriggerReason:(unsigned long long)a2 confirmationCriteria:(unsigned long long)a3 meshAndPrimaryCandidateCountEqual:(BOOL)a4 previousPrimaryInMesh:(BOOL)a5;

@end

@class NSString, NSDictionary, NSNumber;

@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSNumber *configureState;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *hasSharedUser;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability;
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant;
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted;
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID;


@end

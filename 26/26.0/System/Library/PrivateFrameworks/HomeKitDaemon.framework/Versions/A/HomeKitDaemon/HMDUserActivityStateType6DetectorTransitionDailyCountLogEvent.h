@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDUserActivityStateType6DetectorTransitionDailyCountLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSNumber *countNotStartedAndEndedAtHome;
@property (readonly, nonatomic) NSNumber *countStartedAndEndedAtHome;
@property (readonly, nonatomic) NSNumber *durationBetweenInitialETAAndActualArrivalTime;
@property (readonly, nonatomic) NSNumber *durationBetweenStartingComingHomeAndActualArrivalTime;
@property (readonly, nonatomic) NSNumber *countStartedAndEndedNotAtHome;
@property (readonly, nonatomic) NSNumber *durationBetweenStartingComingHomeAndCancellingComingHome;
@property (readonly, nonatomic) NSNumber *durationBetweenCancellingComingHomeAndEstimatedArrivalTime;
@property (readonly, nonatomic) NSNumber *countEndDateUpdated;
@property (readonly, nonatomic) NSNumber *countPausedNotMakingProgress;
@property (readonly, nonatomic) NSNumber *durationBetweenStartingComingHomeAndPausingComingHome;
@property (readonly, nonatomic) NSNumber *durationBetweenPausingComingHomeAndEstimatedArrivalTime;
@property (readonly, nonatomic) NSNumber *countResumedAfterPaused;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCountNotStartedAndEndedAtHome:(id)a0 countStartedAndEndedAtHome:(id)a1 durationBetweenInitialETAAndActualArrivalTime:(id)a2 durationBetweenStartingComingHomeAndActualArrivalTime:(id)a3 countStartedAndEndedNotAtHome:(id)a4 durationBetweenStartingComingHomeAndCancellingComingHome:(id)a5 durationBetweenCancellingComingHomeAndEstimatedArrivalTime:(id)a6 countEndDateUpdated:(id)a7 countPausedNotMakingProgress:(id)a8 durationBetweenStartingComingHomeAndPausingComingHome:(id)a9 durationBetweenPausingComingHomeAndEstimatedArrivalTime:(id)a10 countResumedAfterPaused:(id)a11;

@end

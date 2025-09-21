@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDHomeActivityStateVacationTransitionDailyCountLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSNumber *detectorInitiatedCount;
@property (readonly, nonatomic) NSNumber *timerFiredCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)totalCount;
- (void).cxx_destruct;
- (id)initWithDetectorInitiatedCount:(id)a0 timerFiredCount:(id)a1;

@end

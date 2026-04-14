@class HMDHH2AutoMigrationEligibilityResult, NSString, NSDictionary;

@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserAutoMigrationEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerManualEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerAutoEligibilityResult;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithAutoMigrationEligibilityResult:(id)a0 migrationByOwnerManualEligibilityResult:(id)a1 migrationByOwnerAutoEligibilityResult:(id)a2;

@end

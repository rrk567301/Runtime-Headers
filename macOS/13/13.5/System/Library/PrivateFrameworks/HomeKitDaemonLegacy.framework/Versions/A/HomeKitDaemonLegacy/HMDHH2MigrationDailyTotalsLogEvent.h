@class NSNumber, NSString, NSDictionary;

@interface HMDHH2MigrationDailyTotalsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long migrationEventType;
@property (readonly) NSNumber *attemptCount;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initEndWithAutoMigration:(BOOL)a0 dryRun:(BOOL)a1 attemptCount:(id)a2 error:(id)a3;
- (id)initStartWithAutoMigration:(BOOL)a0 dryRun:(BOOL)a1 attemptCount:(id)a2;
- (id)initWithMigrationEventType:(unsigned long long)a0 attemptCount:(id)a1 error:(id)a2;

@end

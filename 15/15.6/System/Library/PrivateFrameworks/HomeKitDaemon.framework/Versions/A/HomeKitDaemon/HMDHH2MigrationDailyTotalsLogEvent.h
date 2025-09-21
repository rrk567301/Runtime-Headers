@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDHH2MigrationDailyTotalsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) unsigned long long migrationEventType;
@property (readonly) NSNumber *attemptCount;
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
- (id)initEndWithAutoMigration:(char)a0 dryRun:(char)a1 attemptCount:(id)a2 error:(id)a3;
- (id)initStartWithAutoMigration:(char)a0 dryRun:(char)a1 attemptCount:(id)a2;
- (id)initWithMigrationEventType:(unsigned long long)a0 attemptCount:(id)a1 error:(id)a2;

@end

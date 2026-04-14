@class NSString, NSDictionary;

@interface HMDHH2MigrationDailyTotalsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long migrationEventType;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initStartWithAutoMigration:(BOOL)a0 dryRun:(BOOL)a1;
- (id)initEndWithAutoMigration:(BOOL)a0 dryRun:(BOOL)a1 error:(id)a2;
- (id)initWithMigrationEventType:(unsigned long long)a0 error:(id)a1;

@end

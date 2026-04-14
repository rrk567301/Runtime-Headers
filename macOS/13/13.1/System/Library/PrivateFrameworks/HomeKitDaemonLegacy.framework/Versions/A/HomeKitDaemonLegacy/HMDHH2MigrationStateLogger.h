@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (id)allowedValues;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (void)recordIsDryRun:(BOOL)a0;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)incrementMigrationAttempt;
+ (long long)migrationAttempt;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (BOOL)doesLogEventExistOnDisk;
+ (id)migrationLogEventRecord;
+ (void)removeMigrationLogEventRecordFromDisk;

- (id)init;
- (void).cxx_destruct;
- (void)resetStoredMigrationState;
- (id)populateLogEvent;
- (BOOL)shouldSubmitLogEvent;
- (void)populateTotalMigrationTime;
- (id)migrationError;
- (long long)migrationStartTime;
- (long long)migrationEndTime;

@end

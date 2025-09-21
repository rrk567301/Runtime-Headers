@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) char autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) char migrationSuccessful;

+ (id)allowedValues;
+ (void)recordIsDryRun:(char)a0;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (id)_getLowestError:(id)a0;
+ (id)autoMigrationAttempt;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (char)doesLogEventExistOnDisk;
+ (void)incrementAutoMigrationAttempt;
+ (void)incrementMigrationAttempt;
+ (long long)migrationAttempt;
+ (id)migrationLogEventRecord;
+ (void)recordMigrationEnd:(char)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (void)recordMigrationStart:(char)a0 isDryRun:(char)a1;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)setAutoMigration:(char)a0;
+ (void)setMigrationSuccessful:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isDryRun;
- (id)migrationDetailsLogEventFromDisk;
- (id)migrationEndLogEventFromDisk;
- (long long)migrationEndTime;
- (id)migrationError;
- (long long)migrationStartTime;
- (void)populateTotalMigrationTime;
- (void)resetStoredMigrationState;
- (char)shouldSubmitLogEvent;

@end

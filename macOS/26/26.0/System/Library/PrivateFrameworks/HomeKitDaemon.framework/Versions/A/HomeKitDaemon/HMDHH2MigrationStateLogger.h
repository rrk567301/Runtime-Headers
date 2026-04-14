@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (void)incrementAutoMigrationAttempt;
+ (id)autoMigrationAttempt;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (id)migrationLogEventRecord;
+ (id)_getLowestError:(id)a0;
+ (id)allowedValues;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)incrementMigrationAttempt;
+ (long long)migrationAttempt;
+ (void)recordIsDryRun:(BOOL)a0;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;

- (id)migrationDetailsLogEventFromDisk;
- (BOOL)shouldSubmitLogEvent;
- (id)migrationEndLogEventFromDisk;
- (BOOL)isDryRun;
- (id)init;
- (long long)migrationStartTime;
- (long long)migrationEndTime;
- (void)populateTotalMigrationTime;
- (id)migrationError;
- (void)resetStoredMigrationState;
- (void).cxx_destruct;

@end

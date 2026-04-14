@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (long long)migrationAttempt;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (id)_getLowestError:(id)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (id)migrationLogEventRecord;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)incrementMigrationAttempt;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (id)autoMigrationAttempt;
+ (id)allowedValues;
+ (void)recordIsDryRun:(BOOL)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (void)incrementAutoMigrationAttempt;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;

- (long long)migrationStartTime;
- (void)resetStoredMigrationState;
- (BOOL)isDryRun;
- (BOOL)shouldSubmitLogEvent;
- (void).cxx_destruct;
- (id)migrationError;
- (void)populateTotalMigrationTime;
- (long long)migrationEndTime;
- (id)migrationEndLogEventFromDisk;
- (id)migrationDetailsLogEventFromDisk;
- (id)init;

@end

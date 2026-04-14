@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (void)recordIsDryRun:(BOOL)a0;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (void)incrementMigrationAttempt;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (id)autoMigrationAttempt;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (long long)migrationAttempt;
+ (id)_getLowestError:(id)a0;
+ (void)incrementAutoMigrationAttempt;
+ (id)allowedValues;
+ (id)migrationLogEventRecord;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;

- (id)migrationError;
- (BOOL)shouldSubmitLogEvent;
- (long long)migrationEndTime;
- (BOOL)isDryRun;
- (id)migrationDetailsLogEventFromDisk;
- (void)resetStoredMigrationState;
- (long long)migrationStartTime;
- (void).cxx_destruct;
- (void)populateTotalMigrationTime;
- (id)migrationEndLogEventFromDisk;
- (id)init;

@end

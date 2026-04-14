@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (id)migrationLogEventRecord;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)incrementAutoMigrationAttempt;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (void)recordIsDryRun:(BOOL)a0;
+ (id)allowedValues;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (long long)migrationAttempt;
+ (id)autoMigrationAttempt;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (id)_getLowestError:(id)a0;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)incrementMigrationAttempt;
+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;

- (BOOL)isDryRun;
- (void)populateTotalMigrationTime;
- (id)migrationEndLogEventFromDisk;
- (id)migrationDetailsLogEventFromDisk;
- (void)resetStoredMigrationState;
- (id)init;
- (BOOL)shouldSubmitLogEvent;
- (void).cxx_destruct;
- (id)migrationError;
- (long long)migrationStartTime;
- (long long)migrationEndTime;

@end

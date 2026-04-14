@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (id)allowedValues;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (long long)migrationAttempt;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)incrementMigrationAttempt;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (id)autoMigrationAttempt;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)incrementAutoMigrationAttempt;
+ (id)_getLowestError:(id)a0;
+ (id)migrationLogEventRecord;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (void)setMigrationSuccessful:(BOOL)a0;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)recordIsDryRun:(BOOL)a0;

- (id)migrationDetailsLogEventFromDisk;
- (BOOL)isDryRun;
- (BOOL)shouldSubmitLogEvent;
- (long long)migrationEndTime;
- (long long)migrationStartTime;
- (void)resetStoredMigrationState;
- (void)populateTotalMigrationTime;
- (void).cxx_destruct;
- (id)migrationEndLogEventFromDisk;
- (id)migrationError;
- (id)init;

@end

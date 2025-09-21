@class NSString;

@interface HMDHH2MigratorRecord : HMFObject <HMFLogging>

@property (retain, nonatomic) NSString *hh2MigratorRecordDataStorePath;
@property (nonatomic) char isMigrationInProgress;
@property (nonatomic) unsigned int currentMigrationAttempt;
@property (nonatomic) char shouldSkipKeyRollOperations;
@property (nonatomic) char forceMigrationFailureForTesting;
@property (nonatomic) char migrateFromTestDirectory;
@property (nonatomic) char dryRun;
@property (nonatomic) char isAutoMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)archiveMigratorDict:(id)a0;
+ (id)lastMigrationFailure;
+ (id)prepareDictionary:(id)a0;
+ (id)prepareDictionary:(char)a0 attempt:(unsigned int)a1 skipKeyRoll:(char)a2 forceFailForTesting:(char)a3 migrateFromTestDirectory:(char)a4 dryRun:(char)a5 isAutoMigration:(char)a6;
+ (char)recordMigrationFailureWithError:(id)a0;
+ (void)removeMigrationFailureRecord;
+ (id)singleRecord;
+ (id)unarchiveMigratorDict:(id)a0;

- (void).cxx_destruct;
- (char)writeToDisk;
- (id)attributeDescriptions;
- (char)finishMigration;
- (char)beginMigration;
- (id)initWithLocalStorePath:(id)a0;
- (char)isMaximumMigrationAttemptReached;
- (void)readMigratorRecord;
- (void)unarchiveRecordFromData:(id)a0;
- (void)updateValuesFromDict:(id)a0;
- (char)writeMigratorRecord:(id)a0;
- (char)writeNewMigrationRecord;

@end

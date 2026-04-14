@class NSString;

@interface HMDHH2MigratorRecord : HMFObject <HMFLogging>

@property (retain, nonatomic) NSString *hh2MigratorRecordDataStorePath;
@property (nonatomic) BOOL isMigrationInProgress;
@property (nonatomic) unsigned int currentMigrationAttempt;
@property (nonatomic) BOOL shouldSkipKeyRollOperations;
@property (nonatomic) BOOL forceMigrationFailureForTesting;
@property (nonatomic) BOOL migrateFromTestDirectory;
@property (nonatomic) BOOL dryRun;
@property (nonatomic) BOOL isAutoMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)singleRecord;
+ (id)archiveMigratorDict:(id)a0;
+ (void)removeMigrationFailureRecord;
+ (id)prepareDictionary:(BOOL)a0 attempt:(unsigned int)a1 skipKeyRoll:(BOOL)a2 forceFailForTesting:(BOOL)a3 migrateFromTestDirectory:(BOOL)a4 dryRun:(BOOL)a5 isAutoMigration:(BOOL)a6;
+ (id)unarchiveMigratorDict:(id)a0;
+ (BOOL)recordMigrationFailureWithError:(id)a0;
+ (id)prepareDictionary:(id)a0;
+ (id)lastMigrationFailure;

- (BOOL)isMaximumMigrationAttemptReached;
- (void)readMigratorRecord;
- (BOOL)writeNewMigrationRecord;
- (id)attributeDescriptions;
- (void)unarchiveRecordFromData:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeToDisk;
- (void)updateValuesFromDict:(id)a0;
- (BOOL)writeMigratorRecord:(id)a0;
- (id)initWithLocalStorePath:(id)a0;
- (BOOL)finishMigration;
- (BOOL)beginMigration;

@end

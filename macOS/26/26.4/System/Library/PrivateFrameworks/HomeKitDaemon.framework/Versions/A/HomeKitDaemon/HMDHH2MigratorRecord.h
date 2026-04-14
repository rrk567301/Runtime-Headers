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

+ (id)singleRecord;
+ (id)prepareDictionary:(BOOL)a0 attempt:(unsigned int)a1 skipKeyRoll:(BOOL)a2 forceFailForTesting:(BOOL)a3 migrateFromTestDirectory:(BOOL)a4 dryRun:(BOOL)a5 isAutoMigration:(BOOL)a6;
+ (id)prepareDictionary:(id)a0;
+ (BOOL)recordMigrationFailureWithError:(id)a0;
+ (void)removeMigrationFailureRecord;
+ (id)logCategory;
+ (id)unarchiveMigratorDict:(id)a0;
+ (id)archiveMigratorDict:(id)a0;
+ (id)lastMigrationFailure;

- (BOOL)isMaximumMigrationAttemptReached;
- (id)initWithLocalStorePath:(id)a0;
- (BOOL)finishMigration;
- (void)readMigratorRecord;
- (void)unarchiveRecordFromData:(id)a0;
- (BOOL)beginMigration;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)writeNewMigrationRecord;
- (BOOL)writeToDisk;
- (BOOL)writeMigratorRecord:(id)a0;
- (void)updateValuesFromDict:(id)a0;

@end

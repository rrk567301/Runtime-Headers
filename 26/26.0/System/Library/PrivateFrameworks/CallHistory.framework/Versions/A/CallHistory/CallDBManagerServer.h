@class CHFeatureFlags;

@interface CallDBManagerServer : CallDBManager

@property (readonly, nonatomic) CHFeatureFlags *featureFlags;

+ (id)downgradeDatabaseAtLocation:(id)a0 toVersion:(long long)a1;
+ (id)getDestinationModel:(long long)a0;
+ (id)getUniqueIdsForAllRecords:(id)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0 withSourceVersion:(long long)a1;
+ (id)getDestinationModelForVersion:(long long)a0;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)a0 andHavingObjectIds:(id)a1;
+ (id)getObjectIdsForAllRecords:(id)a0;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0;

- (void)populateServiceProviderAndCallCategory:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (id)createMOCForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)a0 isEncrypted:(BOOL)a1;
- (void)deleteObjectsWithPredicate:(id)a0 fromManagedObjectContext:(id)a1;
- (BOOL)handleBootUpFailure:(id)a0;
- (void)prepareDatabaseForNextStepInMigration:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)populateHandleType:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (BOOL)bootUpDBAtLocation:(id)a0 isEncrypted:(BOOL)a1;
- (BOOL)handleDatabaseMigration:(id)a0 isEncrypted:(BOOL)a1 isRetry:(BOOL)a2;
- (void)createPermanent;
- (void)moveCallsFromTempDatabase;
- (id)init;
- (id)tempDBLocation:(unsigned char *)a0;
- (id)initWithDeviceObserver:(id)a0;
- (id)uniqueIDsOfCallsToKeepFromManagedObjectContext:(id)a0 forFaceTimeCalls:(BOOL)a1;
- (void)prepareForMigrationDBAtURL:(id)a0 withModelAtURL:(id)a1 andIsEncrypted:(BOOL)a2;
- (void)populateRecentCallRemoteParticipantHandles:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)createTemporary;
- (id)uniqueIDsFromCallRecords:(id)a0 forFaceTimeCalls:(BOOL)a1;
- (BOOL)createCallDBProperties;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)a0 fromManagedObjectContext:(id)a1;
- (void)modifyCallRecordForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2 modifyCallRecord:(id /* block */)a3;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (id)permDBLocation:(unsigned char *)a0;
- (BOOL)dbShouldBePrunedForVersion:(long long)a0;
- (void)pruneDBFromManagedContext:(id)a0 version:(unsigned long long)a1;
- (void).cxx_destruct;

@end

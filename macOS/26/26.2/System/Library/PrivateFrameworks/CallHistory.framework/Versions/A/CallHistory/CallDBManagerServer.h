@class CHFeatureFlags;

@interface CallDBManagerServer : CallDBManager

@property (readonly, nonatomic) CHFeatureFlags *featureFlags;
@property (readonly, nonatomic) id /* block */ metaInfoProvider;

+ (id)getDestinationModelForVersion:(long long)a0;
+ (id)downgradeDatabaseAtLocation:(id)a0 toVersion:(long long)a1;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)a0 andHavingObjectIds:(id)a1;
+ (long long)getNextVersionToDowngradeTo:(long long)a0;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)a0;
+ (id)getObjectIdsForAllRecords:(id)a0;
+ (id)getUniqueIdsForAllRecords:(id)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0 withSourceVersion:(long long)a1;
+ (id)getDestinationModel:(long long)a0;

- (id)permDBLocation:(unsigned char *)a0;
- (id)initWithDeviceObserver:(id)a0;
- (void)createPermanent;
- (void)createTemporary;
- (id)tempDBLocation:(unsigned char *)a0;
- (void)pruneDBFromManagedContext:(id)a0 version:(unsigned long long)a1;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)a0 fromManagedObjectContext:(id)a1;
- (id)initWithDeviceObserver:(id)a0 metaInfoProvider:(id /* block */)a1;
- (void)modifyCallRecordForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2 modifyCallRecord:(id /* block */)a3;
- (BOOL)handleDatabaseMigration:(id)a0 isEncrypted:(BOOL)a1 isRetry:(BOOL)a2;
- (BOOL)createCallDBProperties;
- (BOOL)bootUpDBAtLocation:(id)a0 isEncrypted:(BOOL)a1 isTemporary:(BOOL)a2;
- (id)createMOCForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)moveCallsFromTempDatabase;
- (void)prepareForMigrationDBAtURL:(id)a0 withModelAtURL:(id)a1 andIsEncrypted:(BOOL)a2;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void).cxx_destruct;
- (id)uniqueIDsFromCallRecords:(id)a0 forFaceTimeCalls:(BOOL)a1;
- (void)deleteObjectsWithPredicate:(id)a0 fromManagedObjectContext:(id)a1;
- (BOOL)handleBootUpFailure:(id)a0 isTemporary:(BOOL)a1;
- (void)populateServiceProviderAndCallCategory:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (id)uniqueIDsOfCallsToKeepFromManagedObjectContext:(id)a0 forFaceTimeCalls:(BOOL)a1;
- (void)populateHandleType:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (void)prepareDatabaseForNextStepInMigration:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;
- (id)init;
- (BOOL)dbShouldBePrunedForVersion:(long long)a0;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)a0 isEncrypted:(BOOL)a1 isTemporary:(BOOL)a2;
- (void)populateRecentCallRemoteParticipantHandles:(id)a0 dbVersion:(long long)a1 isEncrypted:(BOOL)a2;

@end

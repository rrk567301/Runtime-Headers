@class CHFeatureFlags;

@interface CallDBManagerServer : CallDBManager

@property (readonly, nonatomic) CHFeatureFlags *featureFlags;

+ (id)downgradeDatabaseAtLocation:(id)a0 toVersion:(long long)a1;
+ (id)getDestinationModel:(long long)a0;
+ (id)getDestinationModelForVersion:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0;
+ (long long)getNextVersionToDowngradeTo:(long long)a0 withSourceVersion:(long long)a1;
+ (long long)getNextVersionToMigrateToCurrentVersion:(long long)a0;
+ (id)getObjectIdsForAllRecords:(id)a0;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)a0 andHavingObjectIds:(id)a1;
+ (id)getUniqueIdsForAllRecords:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)createTemporary;
- (id)permDBLocation:(unsigned char *)a0;
- (char)bootUpDBAtLocation:(id)a0 isEncrypted:(char)a1;
- (void)createPermanent;
- (id)tempDBLocation:(unsigned char *)a0;
- (char)bootUpDBAtLocationWithRecovery:(id)a0 isEncrypted:(char)a1;
- (char)createCallDBProperties;
- (id)createMOCForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;
- (id)getUUIDsOfNMostRecentRecords:(unsigned long long)a0 fromManagedObjectContext:(id)a1;
- (char)handleBootUpFailure:(id)a0;
- (char)handleDatabaseMigration:(id)a0 isEncrypted:(char)a1 isRetry:(char)a2;
- (id)initWithDeviceObserver:(id)a0;
- (void)modifyCallRecordForDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2 modifyCallRecord:(id /* block */)a3;
- (void)moveCallsFromTempDatabase;
- (void)populateHandleType:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;
- (void)populateRecentCallRemoteParticipantHandles:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;
- (void)populateServiceProviderAndCallCategory:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;
- (void)prepareDatabaseForNextStepInMigration:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;
- (void)prepareForMigrationDBAtURL:(id)a0 withModelAtURL:(id)a1 andIsEncrypted:(char)a2;
- (char)removeDuplicatesFromDBAtLocation:(id)a0 dbVersion:(long long)a1 isEncrypted:(char)a2;

@end

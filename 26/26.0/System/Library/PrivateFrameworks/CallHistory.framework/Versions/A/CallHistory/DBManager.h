@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger

@property (retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator;

+ (BOOL)destroyDBAtLocation:(id)a0 withModel:(id)a1;
+ (long long)isDataStoreAtURLInitialized:(id)a0 withModelAtURL:(id)a1;
+ (id)migrationStoreURLIn:(id)a0 fromSourceURL:(id)a1 andModelURL:(id)a2;
+ (id)instanceWithModelURL:(id)a0;
+ (BOOL)performMigrationFrom:(id)a0 sourceModel:(id)a1 toDestinationURL:(id)a2 destinationModel:(id)a3 mappingModel:(id)a4 isEncrypted:(BOOL)a5;
+ (id)getManagedObjectModelFromDB:(id)a0 orModelURL:(id)a1 orMetadata:(id)a2;
+ (id)getPersistentCoordinatorWithModel:(id)a0;
+ (long long)versionForDBAtLocation:(id)a0;
+ (void)setPropertyValue:(id)a0 forKey:(id)a1 forContext:(id)a2;
+ (long long)versionForManagedObjectModel:(id)a0;
+ (BOOL)destroyDBAtLocation:(id)a0 withModelAtLocation:(id)a1;
+ (id)sourceMetadataForDBAtLocation:(id)a0 withOptions:(id)a1;
+ (id)migrationDirectoryFromSourceURL:(id)a0;
+ (BOOL)deleteDirectoryAtLocation:(id)a0;
+ (long long)mapToDBMErrorCode:(id)a0;
+ (id)entityDescriptionHavingName:(id)a0 forContext:(id)a1;
+ (id)getPropertyValueForKey:(id)a0 forContext:(id)a1;
+ (BOOL)moveDBAtLocation:(id)a0 toLocation:(id)a1 withModel:(id)a2;
+ (id)migrateDataStoreAtLocation:(id)a0 withGetDestinationModel:(id /* block */)a1 isEncrypted:(BOOL)a2;
+ (BOOL)moveDBAtLocation:(id)a0 toLocation:(id)a1 withModelAtLocation:(id)a2;
+ (BOOL)replacePersistentStore:(id)a0 withURL:(id)a1;
+ (id)persistentStoreOptionsWithURL:(id)a0 isEncrypted:(BOOL)a1;
+ (BOOL)makeDatabaseAtURLClassCDataProtected:(id)a0;

- (void)removeDataStoreAtLocation:(id)a0;
- (id)createManagedObjectContext;
- (BOOL)addDataStoreAtLocation:(id)a0 isEncrypted:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end

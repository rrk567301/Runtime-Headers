@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger

@property (retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator;

+ (id)migrateDataStoreAtLocation:(id)a0 withGetDestinationModel:(id /* block */)a1 isEncrypted:(char)a2;
+ (char)replacePersistentStore:(id)a0 withURL:(id)a1;
+ (char)deleteDirectoryAtLocation:(id)a0;
+ (char)destroyDBAtLocation:(id)a0 withModel:(id)a1;
+ (char)destroyDBAtLocation:(id)a0 withModelAtLocation:(id)a1;
+ (id)entityDescriptionHavingName:(id)a0 forContext:(id)a1;
+ (id)getManagedObjectModelFromDB:(id)a0 orModelURL:(id)a1 orMetadata:(id)a2;
+ (id)getPersistentCoordinatorWithModel:(id)a0;
+ (id)getPropertyValueForKey:(id)a0 forContext:(id)a1;
+ (id)instanceWithModelURL:(id)a0;
+ (long long)isDataStoreAtURLInitialized:(id)a0 withModelAtURL:(id)a1;
+ (char)makeDatabaseAtURLClassCDataProtected:(id)a0;
+ (long long)mapToDBMErrorCode:(id)a0;
+ (id)migrationDirectoryFromSourceURL:(id)a0;
+ (id)migrationStoreURLIn:(id)a0 fromSourceURL:(id)a1 andModelURL:(id)a2;
+ (char)moveDBAtLocation:(id)a0 toLocation:(id)a1 withModel:(id)a2;
+ (char)moveDBAtLocation:(id)a0 toLocation:(id)a1 withModelAtLocation:(id)a2;
+ (char)performMigrationFrom:(id)a0 sourceModel:(id)a1 toDestinationURL:(id)a2 destinationModel:(id)a3 mappingModel:(id)a4 isEncrypted:(char)a5;
+ (id)persistentStoreOptionsWithURL:(id)a0 isEncrypted:(char)a1;
+ (void)setPropertyValue:(id)a0 forKey:(id)a1 forContext:(id)a2;
+ (id)sourceMetadataForDBAtLocation:(id)a0 withOptions:(id)a1;
+ (long long)versionForDBAtLocation:(id)a0;
+ (long long)versionForManagedObjectModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (char)addDataStoreAtLocation:(id)a0 isEncrypted:(char)a1;
- (void)removeDataStoreAtLocation:(id)a0;

@end

@class NSString, _DKDataProtectionStateMonitor, NSURL, NSCloudKitMirroringDelegate, NSMutableDictionary, NSFileManager, NSManagedObjectModel, NSMapTable;
@protocol _DKCoreDataStorageDelegate;

@interface _DKCoreDataStorage : NSObject {
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_paths;
    NSMapTable *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    NSFileManager *_fm;
    char _isManagedDatabase;
    char _isDatabaseManager;
    char _maintenanceRunning;
}

@property (readonly) NSString *directory;
@property (readonly) char readOnly;
@property (readonly) char localOnly;
@property (readonly) char sync;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *databaseName;
@property (weak) id<_DKCoreDataStorageDelegate> delegate;
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) NSString *containerIdentifier;
@property (nonatomic) char requiresManualMigration;

+ (unsigned long long)anonymizeObjectStringsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 batchFetchLimit:(unsigned long long)a4 totalFetchLimit:(unsigned long long)a5 includeSubentities:(char)a6 salt:(id)a7;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)a0 withSalt:(id)a1;
+ (unsigned long long)countObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 includeSubentities:(char)a3 includePendingChanges:(char)a4;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)a0 context:(id)a1 entityName:(id)a2 predicate:(id)a3 sortDescriptors:(id)a4 fetchLimit:(unsigned long long)a5 includeSubentities:(char)a6 includePendingChanges:(char)a7;
+ (unsigned long long)deleteObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 fetchLimit:(unsigned long long)a4 includeSubentities:(char)a5 includePendingChanges:(char)a6;
+ (unsigned long long)deleteObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 fetchOffset:(unsigned long long)a4 fetchLimit:(unsigned long long)a5 includeSubentities:(char)a6 includePendingChanges:(char)a7;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)a0;
+ (unsigned long long)updateObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 batchFetchLimit:(unsigned long long)a4 totalFetchLimit:(unsigned long long)a5 includeSubentities:(char)a6 updateBlock:(id /* block */)a7;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (void)closeStorageForProtectionClass:(id)a0;
- (id)privateManagedObjectContextFor:(id)a0;
- (char)confirmDatabaseConnectionFor:(id)a0;
- (id)copyStorageFor:(id)a0 toDirectory:(id)a1;
- (char)deleteStorageFor:(id)a0;
- (id)initWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 readOnly:(char)a3 localOnly:(char)a4;
- (id)initWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 sync:(char)a3;
- (char)isManagedObjectContextFor:(id)a0 equalToManagedObjectContext:(id)a1;
- (char)isManagedObjectModel:(id)a0 compatibleWithPersistentStoreAtURL:(id)a1 error:(id *)a2;
- (id)managedObjectContextFor:(id)a0;
- (id)managedObjectContextFor:(id)a0 identifier:(id)a1;
- (id)managedObjectModelForVersion:(unsigned long long)a0;
- (id)managedObjectModelURLForVersion:(unsigned long long)a0;
- (char)migratePersistentStoreAtURL:(id)a0 toManagedObjectModel:(id)a1 protectionClass:(id)a2 error:(id *)a3;
- (long long)modelVersionForStoreAtURL:(id)a0 error:(id *)a1;
- (id)persistentStoreCoordinatorFor:(id)a0;
- (void)setManagedObjectModel:(id)a0;

@end

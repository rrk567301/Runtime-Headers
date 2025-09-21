@class NSString;

@interface ULPersistenceMigrator : NSObject <CLLocationManagerDelegate>

@property (nonatomic) struct ULDatabaseStoreInterface { void /* function */ **x0; } *dbStore;
@property (nonatomic) struct ULDatabaseManagementInterface { void /* function */ **x0; } *dbManagement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_databaseMigrationTransaction;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0 andDbManagement:(struct ULDatabaseManagementInterface { void /* function */ **x0; } *)a1;
- (BOOL)migrateToLatestVersion;

@end

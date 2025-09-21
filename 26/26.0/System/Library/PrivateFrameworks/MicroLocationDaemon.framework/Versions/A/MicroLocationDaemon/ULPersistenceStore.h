@class NSNumber, NSPersistentStoreDescription;

@interface ULPersistenceStore : NSObject

@property (retain, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (nonatomic) BOOL isMigrationToLatestModelRequired;
@property (retain, nonatomic) NSNumber *storeModelVersionBeforeMigration;

- (void).cxx_destruct;
- (id)persistentStoreDescription;
- (id)_getLoadedModelVersionNumber:(id)a0;
- (id)_getStoreMetaData:(id *)a0;
- (id)_getStoreModelVersionNumber;
- (id)_getVersionNumberFromModelVersion:(id)a0;
- (BOOL)_isMigrationRequired:(id)a0;
- (id)initWithURL:(id)a0 useWal:(BOOL)a1;
- (BOOL)loadWithCoordinator:(id)a0 error:(id *)a1;
- (void)setMigrationComplete;

@end

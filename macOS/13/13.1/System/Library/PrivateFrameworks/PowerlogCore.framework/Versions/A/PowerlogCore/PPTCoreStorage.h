@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (void)setupStorage;
+ (void)setupStorageVersions;
+ (void)startAllStorage;
+ (void)setupEntryObjects;
+ (id)storageClassForKey:(id)a0;
+ (id)storageClassForType:(int)a0;
+ (id)sharedSQLStorage;
+ (id)sharedFlatStorage;

- (id)init;
- (void).cxx_destruct;
- (void)startStorage;
- (void)mergePreUnlockDBFile;

@end

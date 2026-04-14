@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (void)setupStorage;
+ (void)startAllStorage;
+ (void)setupEntryObjects;
+ (void)setupMetadataStorage;
+ (id)sharedFlatStorage;
+ (id)sharedSQLStorage;
+ (id)storageClassForKey:(id)a0;
+ (id)storageClassForType:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)mergePreUnlockDBFile;
- (void)startStorage;

@end

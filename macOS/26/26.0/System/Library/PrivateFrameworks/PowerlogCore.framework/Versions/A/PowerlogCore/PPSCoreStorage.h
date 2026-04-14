@class PPSSQLStorage, PPSFlatStorage, NSDictionary;

@interface PPSCoreStorage : NSObject

@property (retain) PPSSQLStorage *sqlStorage;
@property (retain) PPSFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (id)sharedFlatStorage;
+ (id)sharedSQLStorage;

- (void)startStorage;
- (void)setupStorage;
- (id)init;
- (void).cxx_destruct;
- (void)startAllStorage;
- (BOOL)mergePreUnlockDBFiles;
- (void)setupEntryObjects;
- (void)setupMetadataStorage;
- (id)storageClassForKey:(id)a0;
- (id)storageClassForType:(int)a0;

@end

@class PPSSQLStorage, PPSFlatStorage, NSDictionary;

@interface PPSCoreStorage : NSObject

@property (retain) PPSSQLStorage *sqlStorage;
@property (retain) PPSFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (id)sharedFlatStorage;
+ (id)sharedSQLStorage;

- (void).cxx_destruct;
- (void)setupStorage;
- (void)startStorage;
- (id)init;
- (void)startAllStorage;
- (BOOL)mergePreUnlockDBFiles;
- (void)setupEntryObjects;
- (void)setupMetadataStorage;
- (id)storageClassForKey:(id)a0;
- (id)storageClassForType:(int)a0;

@end

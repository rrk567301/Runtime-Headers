@class PPTSQLStorage, NSDictionary, PPTFlatStorage;

@interface PPTCoreStorage : NSObject

@property (retain) PPTSQLStorage *sqlStorage;
@property (retain) PPTFlatStorage *flatStorage;
@property (retain) NSDictionary *storageMap;

+ (void)setupStorage;
+ (id)sharedSQLStorage;
+ (void)setupStorageVersions;
+ (void)setupEntryObjects;
+ (void)startAllStorage;
+ (id)storageClassForKey:(id)a0;
+ (id)storageClassForType:(int)a0;
+ (id)sharedFlatStorage;

- (id)init;
- (void).cxx_destruct;
- (void)startStorage;

@end

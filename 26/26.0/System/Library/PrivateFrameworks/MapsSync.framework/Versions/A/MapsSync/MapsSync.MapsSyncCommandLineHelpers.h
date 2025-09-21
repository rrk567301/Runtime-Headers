@class NSDictionary, NSString, NSManagedObjectModel, NSURL, NSError, NSUUID, NSManagedObjectContext;

@interface MapsSync.MapsSyncCommandLineHelpers : NSObject

@property (class, nonatomic, readonly) NSString *dateFormat;
@property (class, nonatomic, readonly) NSString *coreDataScheme;
@property (class, nonatomic, readonly) NSString *objectIdKey;
@property (class, nonatomic, readonly) NSString *identifierKey;
@property (class, nonatomic, readonly) NSString *contactHandleKey;
@property (class, nonatomic, readonly) NSString *legacyObjectPrefix;
@property (class, nonatomic, readonly) NSString *legacyRelationshipsKey;
@property (class, nonatomic, readonly) NSString *legacyRelationshipsFetchKey;
@property (class, nonatomic, readonly) NSString *legacyRelationshipsIdentifierKey;
@property (class, nonatomic, readonly) NSString *legacyRelationshipsObjectKey;
@property (class, nonatomic, readonly) NSString *legacyMapItemStorageKey;
@property (class, nonatomic, readonly) NSString *mixinMapItemEntityNameKey;
@property (class, nonatomic, readonly) NSString *mixinMapItemStorageKey;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryFrom:(id)a0;
- (id)convertValue:(id)a0 from:(unsigned long long)a1;
- (id)convertValue:(id)a0 to:(unsigned long long)a1;
- (void)coreDataStackWithDatabaseURL:(NSURL *)a0 completionHandler:(void (^)(NSManagedObjectModel *, NSManagedObjectContext *, NSError *))a1;
- (void)deleteObjectWithUrl:(NSURL *)a0 identifier:(NSUUID *)a1 managedObjectId:(NSURL *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)exportDatabaseWithUrl:(NSURL *)a0 entityName:(NSString *)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;
- (void)getCountsWithUrl:(NSURL *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (void)importDatabaseWithUrl:(NSURL *)a0 dictionary:(NSDictionary *)a1 completionHandler:(void (^)(NSError *))a2;
- (id)managedObjectWithEntityName:(id)a0 from:(id)a1 in:(id)a2;
- (void)purgeDatabaseWithUrl:(NSURL *)a0 entityName:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setupRelationshipsFrom:(id)a0 in:(id)a1 clearExisting:(BOOL)a2;

@end

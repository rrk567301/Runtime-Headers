@interface ML3Collection : ML3Entity

+ (void)initialize;
+ (char)_updateRepresentativeItemsForPersistentIDs:(id)a0 usingConnection:(id)a1;
+ (id)artworkCacheIDProperty;
+ (char)canonicalizeCollectionRepresentativeItemsInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)collectionEntityClasses;
+ (char)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3 usingConnection:(id)a4;
+ (id)foreignPropertyForProperty:(id)a0 entityClass:(Class)a1;
+ (char)libraryContentsChangeForProperty:(id)a0;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (char)removeOrphanedCollectionsInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)trackForeignPersistentID;
+ (char)updateRepresentativeItemPersistentIDsInLibrary:(id)a0 persistentIDs:(id)a1 usingConnection:(id)a2;

- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)a0 existingRepresentativePersistentID:(unsigned long long)a1 forUpdateTrackValues:(id)a2;
- (void)updateTrackValues:(id)a0;

@end

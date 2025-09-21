@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary, PHGraphQuery;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
    PHGraphQuery *_graphQuery;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;
+ (id)emptyFetchResultWithPhotoLibrary:(id)a0 fetchType:(id)a1;

- (id)containerIdentifier;
- (id)calculateMediaTypeCounts;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)changeHandlingKey;
- (id)photoLibrary;
- (id)fetchUpdatedObjects;
- (id)fetchSortDescriptors;
- (id)fetchedObjects;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8 batchSize:(unsigned long long)a9;
- (id)fetchRequest;
- (BOOL)isFullyBackedByObjectIDs;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6 batchSize:(unsigned long long)a7;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)copyWithOptions:(id)a0;
- (id)description;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 batchSize:(unsigned long long)a6;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (id)fetchedObjectIDs;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (id)fetchedObjectIDsSet;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (long long)collectionFetchType;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

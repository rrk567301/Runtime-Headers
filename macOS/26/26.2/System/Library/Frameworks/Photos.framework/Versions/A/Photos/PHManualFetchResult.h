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

- (id)photoLibrary;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)fetchRequest;
- (long long)collectionFetchType;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (BOOL)isEqual:(id)a0;
- (id)fetchedObjectIDsSet;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8 batchSize:(unsigned long long)a9;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)containerIdentifier;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (void).cxx_destruct;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)fetchSortDescriptors;
- (id)changeHandlingKey;
- (id)description;
- (id)fetchUpdatedObjects;
- (id)fetchedObjectIDs;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchedObjects;
- (id)copyWithOptions:(id)a0;
- (id)calculateMediaTypeCounts;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6 batchSize:(unsigned long long)a7;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 batchSize:(unsigned long long)a6;
- (BOOL)isFullyBackedByObjectIDs;
- (void)updateRegistrationForChangeNotificationDeltas;

@end

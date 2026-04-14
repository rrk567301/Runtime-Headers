@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary, PHGraphQuery;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
    PHGraphQuery *_graphQuery;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0 fetchType:(id)a1;
+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;

- (id)photoLibrary;
- (id)fetchSortDescriptors;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)containerIdentifier;
- (id)fetchRequest;
- (id)changeHandlingKey;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8 batchSize:(unsigned long long)a9;
- (id)description;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)copyWithOptions:(id)a0;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 batchSize:(unsigned long long)a6;
- (id)fetchedObjectIDs;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6 batchSize:(unsigned long long)a7;
- (long long)collectionFetchType;
- (void).cxx_destruct;
- (id)fetchedObjects;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 graphQuery:(id)a6;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchUpdatedObjects;
- (id)calculateMediaTypeCounts;
- (BOOL)isEqual:(id)a0;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (BOOL)isFullyBackedByObjectIDs;
- (id)fetchedObjectIDsSet;

@end

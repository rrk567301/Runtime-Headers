@class NSArray, NSOrderedSet, PHCollectionList, PHPhotoLibrary, NSDictionary, PHFetchOptions, NSSet, PHFetchResult;

@interface PHCollectionListKeyAssetsFetchResult : PHFetchResult {
    id _changeHandlingKey;
    PHFetchResult *_childCollectionsFetchResult;
    PHCollectionList *_collectionList;
    long long _collectionListKeyAssetLimit;
    NSDictionary *_keyAssetFetchByCollectionID;
    NSOrderedSet *_objectIDs;
    PHFetchOptions *_options;
    PHPhotoLibrary *_photoLibrary;
    NSSet *_relevantOIDSet;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;

- (id)containerIdentifier;
- (id)changeHandlingKey;
- (id)photoLibrary;
- (void)dealloc;
- (id)fetchedObjects;
- (BOOL)isFullyBackedByObjectIDs;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)copyWithOptions:(id)a0;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)fetchedObjectIDs;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)fetchedObjectIDsSet;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (long long)collectionFetchType;
- (void).cxx_destruct;
- (id)_fetchesByCollectionID:(id)a0 change:(id)a1;
- (id)_keyAssetsForCollectionListWithChange:(id)a0 outCollectionsFetch:(id *)a1 outKeyAssetFetchByCollectionID:(id *)a2;
- (id)initWithCollectionList:(id)a0 keyAssets:(id)a1 childCollectionsFetchResult:(id)a2 keyAssetFetchByCollectionID:(id)a3 identifier:(id)a4 options:(id)a5 registerIfNeeded:(BOOL)a6;

@end

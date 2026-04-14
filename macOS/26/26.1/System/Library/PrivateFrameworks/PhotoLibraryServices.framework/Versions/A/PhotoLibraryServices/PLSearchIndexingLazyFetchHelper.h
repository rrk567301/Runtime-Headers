@class NSArray, NSMutableDictionary, PLManagedObject, NSManagedObjectContext;

@interface PLSearchIndexingLazyFetchHelper : NSObject {
    PLManagedObject *_object;
    long long _libraryIdentifier;
    NSManagedObjectContext *_moc;
    NSArray *_allDetectedFaces;
    NSArray *_allSceneClasifications;
    NSArray *_memoriesBeingCuratedAssets;
    NSArray *_albumsEligibleForSearchIndexing;
    NSArray *_momentSearchEntities;
    NSMutableDictionary *_relationsByPersonUUID;
}

- (id)allSceneClassifications;
- (void).cxx_destruct;
- (id)albumsEligibleForSearchIndexing;
- (BOOL)_isEntityLocalizationAllowedForIndexingSearchEntity:(id)a0 withIndexLocaleIdentifier:(id)a1;
- (id)allDetectedFaces;
- (void)enumerateMomentSearchEntitiesWithIndexLocaleIdentifier:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateSearchEntityRelationsForPerson:(id)a0 block:(id /* block */)a1;
- (id)initWithObject:(id)a0 libraryIdentifier:(long long)a1 managedObjectContext:(id)a2;
- (id)memoriesEligibleForSearchIndexing;

@end

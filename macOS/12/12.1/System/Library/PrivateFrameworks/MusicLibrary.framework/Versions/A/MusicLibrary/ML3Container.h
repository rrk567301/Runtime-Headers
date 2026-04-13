@class NSString, NSArray, ML3Predicate;

@interface ML3Container : ML3Entity

@property (readonly, nonatomic) ML3Predicate *smartCriteriaPredicate;
@property (readonly, nonatomic, getter=isLimitedByCount) BOOL limitedByCount;
@property (readonly, nonatomic, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property (readonly, copy, nonatomic) NSString *limitingProperty;
@property (readonly, copy, nonatomic) NSArray *limitOrderingTerms;
@property (readonly, nonatomic) long long limitValue;
@property (readonly, copy, nonatomic) NSArray *cloudDisplayOrderingTerms;
@property (readonly, copy, nonatomic) NSArray *displayOrderingTerms;

+ (void)initialize;
+ (id)databaseTable;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (BOOL)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (id)foreignColumnForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (id)sectionPropertyForProperty:(id)a0;
+ (BOOL)libraryContentsChangeForProperty:(id)a0;
+ (BOOL)assistantLibraryContentsChangeForProperty:(id)a0;
+ (BOOL)libraryDynamicChangeForProperty:(id)a0;
+ (id)extraTablesToDelete;
+ (id)persistentIDColumnForTable:(id)a0;
+ (long long)revisionTrackingCode;
+ (void)populateSortOrdersOfPropertyValues:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
+ (BOOL)_reloadContainedMediaTypes:(BOOL)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(BOOL)a3 incrementEntityRevision:(BOOL)a4 usingLibrary:(id)a5 connection:(id)a6 forContainerPersistentID:(long long)a7;
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)a0 usingConnection:(id)a1;
+ (id)nextFilepathForPlaylistType:(int)a0 withPersistentID:(unsigned long long)a1 inLibrary:(id)a2;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)a0;
+ (BOOL)updateBuiltInSmartPlaylistNamesForCurrentLanguageInLibrary:(id)a0;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)a0;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)a0 inLibrary:(id)a1;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1 itemUpdateBlock:(id /* block */)a2;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)a0;
+ (void)_lovedPlaylistContainerPID:(id *)a0 trackPositions:(id *)a1 forTrackWithPersistentID:(id)a2 usingConnection:(id)a3;
+ (BOOL)updateLovedPlaylistByAddingTrackWithPersistentID:(id)a0 inLibrary:(id)a1;
+ (BOOL)updateLovedPlaylistByRemovingTrackWithPersistentID:(id)a0 inLibrary:(id)a1;
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)a0 fromContainersInLibrary:(id)a1 usingConnection:(id)a2;
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (void)removeNonLibraryItemsFromContainer:(id)a0 usingConnection:(id)a1;
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)a0 usingConnection:(id)a1;
+ (id)_allStaticItemContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)a0;
+ (unsigned int)trackOrderFromProtocolSortType:(int)a0;

- (id)multiverseIdentifier;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (void)setValues:(id)a0 forProperties:(id)a1 async:(BOOL)a2 withCompletionBlock:(id /* block */)a3;
- (BOOL)isEvaluationOrderingDescending;
- (id)evaluationOrderingTerms;
- (BOOL)removeAllTracks;
- (BOOL)setTracksWithPersistentIDs:(id)a0 notify:(BOOL)a1;
- (BOOL)appendTracksWithPersistentIDs:(id)a0 notify:(BOOL)a1;
- (BOOL)moveTrackFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (BOOL)removeTracksAtIndexes:(id)a0 notify:(BOOL)a1;
- (BOOL)removeFirstTrack;
- (id)trackPersistentIds;
- (id)childPlaylistPersistentIds;
- (BOOL)isBuiltInSmartPlaylist;
- (long long)_maxPositionForTracksUsingConnection:(id)a0;
- (BOOL)_reloadContainedMediaTypes:(BOOL)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(BOOL)a3 incrementEntityRevision:(BOOL)a4 usingConnection:(id)a5;
- (BOOL)_removeTracksAtIndexes:(id)a0 notify:(BOOL)a1 usingConnection:(id)a2;
- (void)_setContainerSeedItemPersistentIDValue:(id)a0;
- (BOOL)_supportsOrderedTrackOperations;
- (BOOL)_setItemPersistentIDs:(id)a0 reloadContainedMediaTypes:(BOOL)a1 removedMediaTypes:(id)a2 addedMediaTypes:(id)a3 notify:(BOOL)a4 incrementEntityRevision:(BOOL)a5 usingConnection:(id)a6;
- (id)protocolItem;
- (id)criteriaListDescription;

@end

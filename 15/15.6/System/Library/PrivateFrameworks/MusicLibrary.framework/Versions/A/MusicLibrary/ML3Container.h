@class NSString, NSArray, ML3Predicate;

@interface ML3Container : ML3Entity

@property (readonly, nonatomic) ML3Predicate *smartCriteriaPredicate;
@property (readonly, nonatomic, getter=isLimitedByCount) char limitedByCount;
@property (readonly, nonatomic, getter=isLimitOrderingDescending) char limitOrderingDescending;
@property (readonly, copy, nonatomic) NSString *limitingProperty;
@property (readonly, copy, nonatomic) NSArray *limitOrderingTerms;
@property (readonly, nonatomic) long long limitValue;
@property (readonly, copy, nonatomic) NSArray *cloudDisplayOrderingTerms;
@property (readonly, copy, nonatomic) NSArray *displayOrderingTerms;

+ (void)initialize;
+ (id)databaseTable;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (int)protocolSortTypeFromTrackOrder:(unsigned int)a0;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (unsigned int)trackOrderFromProtocolSortType:(int)a0;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (id)_allStaticItemContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)a0 connection:(id)a1;
+ (id)_mediaTypesForTracksWithPersistentIDs:(id)a0 usingConnection:(id)a1;
+ (char)_reloadContainedMediaTypes:(char)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(char)a3 incrementEntityRevision:(char)a4 usingLibrary:(id)a5 connection:(id)a6 forContainerPersistentID:(long long)a7;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)a0 mediaTypes:(id)a1 connection:(id)a2;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)a0 connection:(id)a1 itemUpdateBlock:(id /* block */)a2;
+ (char)assistantLibraryContentsChangeForProperty:(id)a0;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)a0;
+ (id)currentDeviceFavoritesPlaylistInLibrary:(id)a0 usingConnection:(id)a1;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)a0 inLibrary:(id)a1;
+ (char)deleteFromLibrary:(id)a0 deletionType:(int)a1 persistentIDs:(const long long *)a2 count:(unsigned long long)a3;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (char)libraryContentsChangeForProperty:(id)a0;
+ (char)libraryDynamicChangeForProperty:(id)a0;
+ (id)nextFilepathForPlaylistType:(int)a0 withPersistentID:(unsigned long long)a1 inLibrary:(id)a2;
+ (id)persistentIDColumnForTable:(id)a0;
+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)a0;
+ (void)populateSortOrdersOfPropertyValues:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2;
+ (void)reloadContainedMediaTypesForContainerWithPersistID:(long long)a0 usingConnection:(id)a1;
+ (void)removeAnyNonLibraryItemsInPersistentIDs:(id)a0 fromContainersInLibrary:(id)a1 usingConnection:(id)a2;
+ (void)removeNonLibraryItemsFromContainer:(id)a0 usingConnection:(id)a1;
+ (void)removeNonLibraryItemsFromContainersInLibrary:(id)a0 usingConnection:(id)a1;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)a0;
+ (char)smartCriteriaCanBeEvaluated:(id)a0;
+ (char)updateBuiltInSmartPlaylistNamesForCurrentLanguageInLibrary:(id)a0;

- (id)multiverseIdentifier;
- (char)_supportsOrderedTrackOperations;
- (char)removeAllTracks;
- (long long)_maxPositionForTracksUsingConnection:(id)a0;
- (char)_reloadContainedMediaTypes:(char)a0 removedMediaTypes:(id)a1 addedMediaTypes:(id)a2 notify:(char)a3 incrementEntityRevision:(char)a4 usingConnection:(id)a5;
- (char)_removeTracksAtIndexes:(id)a0 notify:(char)a1 usingConnection:(id)a2;
- (void)_setContainerSeedItemPersistentIDValue:(id)a0;
- (char)_setItemPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 reloadContainedMediaTypes:(char)a3 removedMediaTypes:(id)a4 addedMediaTypes:(id)a5 notify:(char)a6 incrementEntityRevision:(char)a7 usingConnection:(id)a8;
- (char)appendTracksWithPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 notify:(char)a3;
- (char)appendTracksWithPersistentIDs:(id)a0 notify:(char)a1;
- (id)childPlaylistPersistentIds;
- (id)criteriaListDescription;
- (id)evaluationOrderingTerms;
- (id)initWithDictionary:(id)a0 inLibrary:(id)a1 cachedNameOrders:(id)a2 usingConnection:(id)a3;
- (char)isBuiltInSmartPlaylist;
- (char)isEvaluationOrderingDescending;
- (char)moveTrackFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)protocolItem;
- (id)protocolItemForDynamicUpdate;
- (char)removeFirstTrack;
- (char)removeTracksAtIndexes:(id)a0 notify:(char)a1;
- (char)setItemReactionText:(id)a0 onEntryAtPosition:(unsigned long long)a1 forUserIdentifier:(id)a2 previousReactionText:(id *)a3;
- (char)setTracksWithPersistentIDs:(id)a0 andEntryProperties:(id)a1 withAttributionIdentifier:(id)a2 notify:(char)a3;
- (char)setTracksWithPersistentIDs:(id)a0 notify:(char)a1;
- (void)setValues:(id)a0 forProperties:(id)a1 async:(char)a2 withCompletionBlock:(id /* block */)a3;
- (id)trackPersistentIds;

@end

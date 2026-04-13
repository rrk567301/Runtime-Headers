@class NSArray, NSString, PHQuery, NSDate, NSManagedObjectID;

@interface PHCollectionList : PHCollection {
    NSString *_localizedTitle;
    NSManagedObjectID *_parentFolderObjectID;
    int _plAlbumKind;
}

@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) PHQuery *query;
@property (readonly, copy, nonatomic) id /* block */ childCollectionsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAssetCollectionsCount;
@property (readonly, nonatomic) unsigned long long estimatedChildCollectionCount;
@property (readonly, nonatomic) BOOL keyCollectionsAtEnd;
@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *localizedLocationNames;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchCollectionListsContainingCollection:(id)a0 options:(id)a1;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchCollectionListsWithType:(long long)a0 subtype:(long long)a1 options:(id)a2;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)a0;
+ (id)fetchRootProjectCollectionListWithOptions:(id)a0;
+ (id)fetchMomentListsWithSubtype:(long long)a0 containingMoment:(id)a1 options:(id)a2;
+ (id)fetchMomentListsWithSubtype:(long long)a0 options:(id)a1;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1 identifier:(id)a2 photoLibrary:(id)a3;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithCollections:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithAssetCollections:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)a0 title:(id)a1;
+ (id)transientCollectionListWithAssetCollections:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)a0 title:(id)a1 identifier:(id)a2;
+ (id)fetchCollectionListsForReferences:(id)a0 photoLibrary:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)localizedTitle;
- (BOOL)hasLocationInfo;
- (id)parentFolderID;
- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;
- (unsigned long long)collectionFixedOrderPriority;
- (id)effectiveCustomSortKey;
- (BOOL)canContainCollections;
- (id)initTransientWithCollections:(id)a0 orQuery:(id)a1 title:(id)a2 identifier:(id)a3 photoLibrary:(id)a4;
- (id)pl_assetContainerList;
- (id)objectReference;

@end

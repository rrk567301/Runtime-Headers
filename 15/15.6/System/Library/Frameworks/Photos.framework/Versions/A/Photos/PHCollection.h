@class NSSortDescriptor, NSString, NSArray, NSPredicate, NSDate, NSManagedObjectID;
@protocol PHCollectionPresentationHints;

@interface PHCollection : PHObject

@property (class, readonly, nonatomic) NSPredicate *predicateForUserCollections;

@property (readonly, nonatomic) NSManagedObjectID *parentFolderID;
@property (readonly, copy, nonatomic) NSSortDescriptor *defaultSortDescriptor;
@property (readonly, nonatomic) char isAlbumContentSort;
@property (readonly, nonatomic) char isAlbumContentTitleSort;
@property (readonly, nonatomic) char isUserSmartAlbum;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount;
@property (readonly, nonatomic) char hasLocalizedTitle;
@property (readonly, nonatomic) char hasLocationInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic, getter=isTrashed) char trashed;
@property (readonly, nonatomic) char willFetchDatesIfNeeded;
@property (readonly, nonatomic) char customSortAscending;
@property (readonly, nonatomic) unsigned int customSortKey;
@property (readonly, copy, nonatomic) NSArray *effectiveCustomSortDescriptors;
@property (readonly, copy, nonatomic) id<PHCollectionPresentationHints> presentationHints;
@property (readonly, nonatomic) char startsAtEnd;
@property (readonly, nonatomic) char canContainAssets;
@property (readonly, nonatomic) char canContainCollections;
@property (readonly, nonatomic) NSString *localizedTitle;

+ (id)fetchCollectionsInCollectionList:(id)a0 options:(id)a1;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)a0;
+ (id)entityKeyMap;
+ (id)fetchFilteredAssetCollections:(id)a0 containingAssetsMatchingPredicate:(id)a1;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchMomentsForAssetsWithOIDs:(id)a0 options:(id)a1;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (char)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (char)isDeleted;
- (id)objectReference;
- (unsigned long long)ancestryIndexOfCollectionList:(id)a0 context:(id)a1;
- (char)canPerformEditOperation:(long long)a0;
- (unsigned long long)collectionFixedOrderPriority;
- (char)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end

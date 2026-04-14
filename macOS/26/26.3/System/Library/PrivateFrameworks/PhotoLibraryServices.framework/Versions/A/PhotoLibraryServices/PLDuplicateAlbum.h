@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;

- (void)awakeFromInsert;
- (id)duplicateAssetsFromCollection;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)removeAssetsAtIndexes:(id)a0;
- (id)mutablePerceptualMatchingAssets;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (BOOL)supportsAssetOrderKeys;
- (void)addAssets:(id)a0 type:(short)a1;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)sortAssets;
- (void)updateAlbumType;

@end

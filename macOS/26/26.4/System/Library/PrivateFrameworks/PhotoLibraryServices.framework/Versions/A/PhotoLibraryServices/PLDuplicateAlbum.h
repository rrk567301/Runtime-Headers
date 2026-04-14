@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;

- (void)awakeFromInsert;
- (void)updateAlbumType;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (id)duplicateAssetsFromCollection;
- (BOOL)supportsAssetOrderKeys;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (void)addAssets:(id)a0 type:(short)a1;
- (void)removeAssetsAtIndexes:(id)a0;
- (id)mutablePerceptualMatchingAssets;
- (void)sortAssets;
- (void)removeInternalAssets:(id)a0;

@end

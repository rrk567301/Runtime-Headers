@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;

- (void)removeAssetsAtIndexes:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (BOOL)supportsAssetOrderKeys;
- (id)duplicateAssetsFromCollection;
- (void)awakeFromInsert;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)sortAssets;
- (void)addAssets:(id)a0 type:(short)a1;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (id)mutablePerceptualMatchingAssets;
- (void)updateAlbumType;
- (id)albumAssetsFetchRequestForDuplicateSort;

@end

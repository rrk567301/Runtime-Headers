@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject

@property char shouldIgnoreLibraryChanges;
@property (readonly) PHCollectionList *collectionList;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) char separateSectionsForSmartAndUserCollections;
@property (nonatomic) char includePeopleAlbum;
@property (nonatomic) char skipKeyAssetFetches;
@property (nonatomic) char skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) char skipAssetFetches;
@property (nonatomic) char skipSyndicatedAssetFetches;
@property (nonatomic) char updateKeyAssetFetchesInBackground;
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (nonatomic) char shouldExcludePrivacySensitiveAlbums;
@property (nonatomic) char simulateNonIncrementalChanges;
@property (nonatomic) long long pausedChangeDetailsBufferLength;

+ (id)_generatePredicateForAssetTypesToInclude:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isRootFolder;
- (id)initWithCollectionsFetchResult:(id)a0;
- (id)_newConfigurationWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (char)_shouldSupportSyndicatedAssetFetches:(id)a0;
- (id)customFetchOptionsForCollection:(id)a0;
- (id)initWithCollectionList:(id)a0;
- (id)initWithCollectionList:(id)a0 collectionsFetchResult:(id)a1;
- (id)newConfigurationWithCollectionList:(id)a0;
- (id)newConfigurationWithCollectionsFetchResult:(id)a0;
- (void)setIsRootFolder:(char)a0;

@end

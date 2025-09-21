@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXNavigationListDataSectionConfiguration : NSObject

@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult;
@property (nonatomic) char emptyCollectionsHidden;
@property (nonatomic) char showSyncedFromMacAlbums;
@property (nonatomic) char includeKeyAssetFetches;
@property (nonatomic) char includeUserSmartAlbums;
@property (nonatomic) char hideHiddenAlbum;
@property (nonatomic) char skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) char skipAssetFetches;
@property (nonatomic) char skipAssetCountFetches;
@property (nonatomic) char skipSyndicatedAssetFetches;
@property (copy, nonatomic) NSPredicate *assetsFilterPredicate;
@property (nonatomic) char simulateNonIncrementalChanges;
@property (nonatomic) long long pausedChangeDetailsBufferLength;

+ (id)configurationWithCollectionList:(id)a0;
+ (id)configurationWithCollectionsFetchResult:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCollectionsFetchResult:(id)a0;
- (id)initWithCollectionList:(id)a0;

@end

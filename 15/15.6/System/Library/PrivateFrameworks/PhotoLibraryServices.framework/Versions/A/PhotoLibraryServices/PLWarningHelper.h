@class NSArray, NSString, PLPhotoLibrary;

@interface PLWarningHelper : NSObject

@property (retain, nonatomic) NSArray *_assets;
@property (nonatomic) long long _syndicationAssetCount;
@property (retain, nonatomic) NSString *_clientName;
@property (nonatomic) long long _style;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAlbums:(id)a3 folders:(id)a4 clientName:(id)a5 style:(long long)a6;
- (void)getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAssets:(id)a3 syndicationAssetCount:(long long)a4 clientName:(id)a5 style:(long long)a6;
- (void)getWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forAssets:(id)a3 operation:(long long)a4 clientName:(id)a5;
- (unsigned long long)_assetsInLibraryScopeCountFromAssets:(id)a0;
- (id)_avalancheDeleteWarningForAvalancheStacksCount:(long long)a0 nonAvalancheItemsToDeleteCount:(long long)a1 nonAvalancheItemsToDeleteType:(short)a2 avalanchePhotosToDeleteCount:(long long)a3 survivingAvalancheFavoritesCount:(long long)a4 avalancheUnrelatedFavoritesCount:(long long)a5 assetCount:(long long)a6;
- (id)_cloudSharedWarningTextForAssetCount:(long long)a0 assetType:(short)a1 albumTitle:(id)a2;
- (id)_cloudSharedWarningTextForAssets:(id)a0;
- (id)_contributorsForAssets:(id)a0;
- (void)_enumerateTestAssetTypesUsingBlock:(id /* block */)a0;
- (void)_enumerateTestBooleansUsingBlock:(id /* block */)a0;
- (void)_enumerateTestDeviceModelNamesUsingBlock:(id /* block */)a0;
- (void)_enumerateTestItemCountsUsingBlock:(id /* block */)a0;
- (void)_enumerateTestOtherItemCountsUsingBlock:(id /* block */)a0;
- (void)_enumerateWarningMessagesUsingBlock:(id /* block */)a0 sectionBlock:(id /* block */)a1;
- (void)_getDeletionWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2;
- (void)_getExpungeWarningMessage:(id *)a0 buttonTitle:(id *)a1 forAssetCount:(long long)a2 assetType:(short)a3 iCPLEnabled:(char)a4 contributors:(id)a5 deviceModelName:(id)a6;
- (void)_getWarningTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 forItemSuffix:(id)a3 count:(unsigned long long)a4 operation:(long long)a5 clientName:(id)a6;
- (char)_hasAssetsInLibraryScope:(id)a0;
- (char)_isExitingSharedLibrary;
- (id)_myAssetsFromAssets:(id)a0;
- (id)_usedElsewhereWarningTextForAssetCount:(long long)a0 inLibraryScopeCount:(long long)a1 myAssets:(id)a2 contributors:(id)a3 inSomeAlbumCount:(long long)a4 affectedLocalAlbumsCount:(long long)a5 assetType:(short)a6 actualDeletionCount:(long long)a7 syndicationAssetCount:(long long)a8;
- (id)_usedElsewhereWarningTextForAssets:(id)a0 actualDeletionCount:(long long)a1;
- (id)allWarningMessageCombinations;
- (void)enumerateWarningMessagesUsingBlock:(id /* block */)a0;
- (void)getAvalancheDeleteWarning:(id *)a0 actualDeletionCount:(long long *)a1 forAssets:(id)a2;
- (void)getExpungeWarningMessage:(id *)a0 buttonTitle:(id *)a1 forAssets:(id)a2;

@end

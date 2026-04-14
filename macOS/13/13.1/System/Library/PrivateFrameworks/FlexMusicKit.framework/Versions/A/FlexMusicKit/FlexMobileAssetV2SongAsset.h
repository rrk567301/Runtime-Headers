@class NSString;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset

@property (readonly) NSString *mobileAssetID;

- (void).cxx_destruct;
- (id)mobileAsset;
- (BOOL)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)a0;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)a0;
- (unsigned long long)assetStatus;
- (id)initWithAssetID:(id)a0 asset:(id)a1 localURL:(id)a2 cloudManager:(id)a3 contentVersion:(long long)a4 compatibilityVersion:(long long)a5;
- (id)_metadataForAssetWithNewestContentVersion;

@end

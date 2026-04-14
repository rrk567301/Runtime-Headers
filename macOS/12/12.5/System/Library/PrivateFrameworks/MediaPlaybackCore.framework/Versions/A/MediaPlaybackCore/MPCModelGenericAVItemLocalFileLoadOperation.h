@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) BOOL requirePreferredAssetQuality;
@property (nonatomic) BOOL allowsCachedAssets;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)isHLSFileAsset:(id)a0;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)a0;

@end

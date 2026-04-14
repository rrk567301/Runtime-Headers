@protocol PXAudioAsset, PXAudioAssetFetchResult;

@interface PXStorySongsConfiguration : NSObject

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> curatedAudioAssets;
@property (readonly, nonatomic) id<PXAudioAsset> currentAsset;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCuratedAudioAssets:(id)a0;
- (id)initWithCuratedAudioAssets:(id)a0 currentAsset:(id)a1;
- (id)previewConfiguration;

@end

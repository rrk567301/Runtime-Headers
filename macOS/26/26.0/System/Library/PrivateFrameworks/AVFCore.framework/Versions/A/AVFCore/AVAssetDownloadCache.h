@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (BOOL)isPlayableOffline;
- (id)URL;
- (void)dealloc;
- (id)_asset;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;

@end

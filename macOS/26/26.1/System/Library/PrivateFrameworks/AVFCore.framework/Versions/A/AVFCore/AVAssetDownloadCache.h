@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)URL;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (void)dealloc;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)_asset;

@end

@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (id)initWithAsset:(id)a0;
- (BOOL)isPlayableOffline;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)URL;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)_asset;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (void)dealloc;

@end

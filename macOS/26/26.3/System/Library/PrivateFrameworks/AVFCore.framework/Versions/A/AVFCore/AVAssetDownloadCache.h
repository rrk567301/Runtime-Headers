@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (id)initWithAsset:(id)a0;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (id)_asset;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)URL;
- (BOOL)isPlayableOffline;
- (void)dealloc;

@end

@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (id)URL;
- (id)_asset;
- (id)initWithAsset:(id)a0;
- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;

@end

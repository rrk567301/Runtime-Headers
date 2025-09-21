@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (id)URL;
- (id)initWithAsset:(id)a0;
- (id)_asset;
- (char)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;

@end

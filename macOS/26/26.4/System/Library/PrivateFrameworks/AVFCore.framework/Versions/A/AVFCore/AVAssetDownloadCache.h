@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (BOOL)isPlayableOffline;
- (id)_workQueue;
- (id)initWithAsset:(id)a0;
- (id)URL;
- (id)_asset;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)mediaPresentationSettingsForMediaSelectionGroup:(id)a0;
- (id)variantsForMediaSelection:(id)a0;
- (void)retrieveMediaStreamInfosForVariant:(id)a0 mediaSelection:(id)a1 completionHandler:(id /* block */)a2;
- (id)mediaPresentationLanguagesForMediaSelectionGroup:(id)a0;
- (void)dealloc;

@end

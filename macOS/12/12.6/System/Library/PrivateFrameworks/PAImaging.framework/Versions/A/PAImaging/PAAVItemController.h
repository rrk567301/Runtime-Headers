@class PLVideoEditSource, IPAVideoPlaybackSettings, NSObject, PFAsyncDispatchMulticaster;
@protocol OS_dispatch_queue, PAPlaybackSettingsEditMulticaster, DGDescriptionCompositionProvider;

@interface PAAVItemController : PAItemController <PAUnadjustedCompositionProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    PFAsyncDispatchMulticaster<PAPlaybackSettingsEditMulticaster> *_multicaster;
    IPAVideoPlaybackSettings *_playbackSettings;
    PLVideoEditSource *_source;
    long long _sourceOrientation;
    id<DGDescriptionCompositionProvider> _assetCompositionProvider;
    id<DGDescriptionCompositionProvider> _unadjustedCompositionProvider;
}

+ (Class)itemClass;

- (id)init;
- (void).cxx_destruct;
- (id)videoURL;
- (id)playbackSettings;
- (void)unadjustedComposition:(id)a0 completion:(id /* block */)a1;
- (void)_resetEditingWithContentEditingInput:(id)a0 playbackSettings:(id)a1 error:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_revertVideo:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_renderAdjustedVideo:(id)a0 contentEditingInput:(id)a1 composition:(id)a2 playbackSettings:(id)a3 queue:(id)a4 workQueue:(id)a5 completion:(id /* block */)a6;
- (void)resetEditingWithContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_setCurrentContentEditingInput:(id)a0;
- (void)setCurrentContentEditingInput:(id)a0;
- (void)_setPlaybackSettings:(id)a0 sourceChanged:(BOOL)a1;
- (void)directUnadjustedComposition:(id)a0 completion:(id /* block */)a1;
- (id)assetComposition;
- (id)compositionIfEditing;
- (long long)_shouldCommitStatus;
- (void)beginEditingWithContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)commitEditingToAsset:(id)a0 contentEditingInput:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)didEndEditing:(BOOL)a0 discard:(BOOL)a1;
- (void)setCurrentContentEditingInput:(id)a0 orientation:(long long)a1 playbackSettings:(id)a2;
- (void)setPlaybackSettings:(id)a0;
- (void)addPlaybackSettingsEditReceiver:(id)a0;
- (struct CGImage { } *)newVideoThumbnail;

@end

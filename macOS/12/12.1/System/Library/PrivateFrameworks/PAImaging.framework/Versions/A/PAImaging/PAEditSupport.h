@class NSObject;
@protocol OS_dispatch_queue;

@interface PAEditSupport : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)newContentEditingRequestOptions:(id)a0;
- (void)renderDescriptionForContentEditingInput:(id)a0 adjustmentData:(id)a1 asset:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)compositionForContentEditingInput:(id)a0 asset:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)_compositionForContentEditingInput:(id)a0 editDescription:(id)a1 error:(id *)a2;
- (id)editSourceForContentEditingInput:(id)a0 error:(id *)a1;
- (id)editSourceForContentEditingInput:(id)a0 asset:(id)a1 error:(id *)a2;
- (id)editSourceForContentEditingInput:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (void)originalRenderDescriptionForContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)videoPlaybackSettingsForContentEditingInput:(id)a0 adjustmentData:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)originalVideoPlaybackSettingsForContentEditingInput:(id)a0 error:(id *)a1;
- (void)shouldCommitRenderDescription:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 asset:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)shouldCommitVideoPlaybackSettings:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (id)convertToAdjustmentData:(id)a0 composition:(id)a1 error:(id *)a2;
- (void)didChangeVideoTrim:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 asset:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (id)adjustmentStackForData:(id)a0 error:(id *)a1;
- (id)adjustmentEnvelopeForData:(id)a0 error:(id *)a1;
- (BOOL)adjustmentEnvelopeContainsUnsupportedOperation:(id)a0;
- (void)_configureFullSizeRenderDuration:(id)a0 fromComposition:(id)a1;
- (void)renderForOutput:(id)a0 adjustments:(id)a1 composition:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)directCompositionForContentEditingInput:(id)a0 adjustmentData:(id)a1 asset:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)originalCompositionForContentEditingInput:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)shouldCommitComposition:(id)a0 forContentEditingInput:(id)a1 assetContentEditingInput:(id)a2 assetAdjustmentData:(id)a3 asset:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (id)nameForShouldCommitStatus:(long long)a0;
- (void)renderCompositionForOutput:(id)a0 composition:(id)a1 asset:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)compositionForAdjustmentData:(id)a0 asset:(id)a1;

@end

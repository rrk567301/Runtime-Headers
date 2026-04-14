@class NUComposition;
@protocol PXEditLivePhotoModel;

@interface PXEditLivePhotoToggleAction : PXEditCompositionAction {
    id<PXEditLivePhotoModel> _livePhotoModel;
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (void)performRedo:(id /* block */)a0;
- (id)initWithCompositionController:(id)a0 livePhotoModel:(id)a1;
- (BOOL)_isLoopingVideo;
- (id)sourceComposition;
- (id)targetComposition;

@end

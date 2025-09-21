@class NSProgress, NSUndoManager, PXDuplicateAssetsAction;

@interface PXPhotoKitDuplicateActionController : NSObject {
    PXDuplicateAssetsAction *_action;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) char shouldUseAlertController;
@property (readonly, nonatomic) NSUndoManager *undoManager;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)a0 hasPhotos:(char)a1 hasVideos:(char)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_checkHasPhotos:(char *)a0 hasVideos:(char *)a1;
- (void)_finishedDuplicationWithSuccess:(char)a0 error:(id)a1;
- (void)_presentAlertWithError:(id)a0;
- (void)_progressFractionCompletedDidChange;
- (char)_validateOriginalAssetResourcesForDuplicateAction:(long long)a0;
- (id)alertConfigurationForDuplicateActionWithUserConfirmationHandler:(id /* block */)a0;
- (void)configureAlertConfiguration:(id)a0 withUserConfirmationHandler:(id /* block */)a1;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1;
- (void)performDuplicateAction:(long long)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;

@end

@interface PXEditBatchPasteAction : PXEditBatchAction {
    id _target;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;
- (id)initWithPresetManager:(id)a0 syncProgress:(id)a1 asyncProgress:(id)a2 asyncLoadingStatusManager:(id)a3 forAssets:(id)a4;
- (void)_syncPasteDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;

@end

@interface PXEditBatchPlaybackRateAction : PXEditBatchAction

@property (nonatomic) float playbackRate;

- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastUndoTitle;
- (id)_playbackRateTitle;
- (void)_syncSetPlaybackRateDidFinishWithResults:(id)a0 didCancel:(char)a1 completionHandler:(id /* block */)a2;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end

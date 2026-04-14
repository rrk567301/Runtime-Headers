@interface PXEditBatchRevertAction : PXEditBatchAction

- (void)performAction:(id /* block */)a0;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;
- (id)localizedProgressToastUndoTitle;
- (id)localizedProgressToastRedoTitle;

@end

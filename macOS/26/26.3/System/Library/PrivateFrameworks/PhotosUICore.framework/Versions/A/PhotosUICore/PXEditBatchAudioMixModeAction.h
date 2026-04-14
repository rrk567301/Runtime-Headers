@class NSString;

@interface PXEditBatchAudioMixModeAction : PXEditBatchAction {
    NSString *_audioMixModeTitle;
}

@property (retain, nonatomic) NSString *audioMixMode;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastUndoTitle;
- (void)_syncSetAudioMixModeDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)audioMixModeTitle;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end

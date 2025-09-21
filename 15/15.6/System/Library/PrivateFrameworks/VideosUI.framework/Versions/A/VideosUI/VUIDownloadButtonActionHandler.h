@class NSViewController, NSView, VUIDownloadButtonViewModel, VUIAlertController;

@interface VUIDownloadButtonActionHandler : NSObject

@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController;
@property (readonly, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (weak, nonatomic) NSViewController *presentingViewController;
@property (weak, nonatomic) NSView *parentView;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadDeletedBlock;
@property (copy, nonatomic) id /* block */ presentAlertBlock;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadCancelledBlock;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_askUserAndDeleteIfNeeded;
- (void)_checkForAccountSignInWithCompletionHandler:(id /* block */)a0;
- (void)_dismissConfirmationAlertController;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (id)_localize:(id)a0 token:(id)a1 value:(id)a2;
- (id)_renewalAlertAction;
- (char)_shouldShowRenewalOption;
- (void)_showDownloadingInfoDialog;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(char)a0 prefer3DOrImmersiveDownload:(char)a1;
- (char)ignoreDownloadActionIfInRetailDemoMode;
- (void)performAction:(char)a0 confirmBeforeStopDownloading:(char)a1;
- (void)performAction:(char)a0 confirmBeforeStopDownloading:(char)a1 prefer3DOrImmersiveDownload:(char)a2;
- (id)topPresentedViewController;

@end

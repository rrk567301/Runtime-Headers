@class NSViewController, NSView, VUIDownloadButtonViewModel, VUIAlertController;

@interface VUIDownloadButtonActionHandler : NSObject

@property (retain, nonatomic) VUIAlertController *deleteConfirmationAlertController;
@property (readonly, nonatomic) VUIDownloadButtonViewModel *viewModel;
@property (weak, nonatomic) NSViewController *presentingViewController;
@property (weak, nonatomic) NSView *parentView;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadDeleted;
@property (copy, nonatomic) id /* block */ acknowledgementDownloadCancelled;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)topPresentedViewController;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void)performAction:(BOOL)a0 confirmBeforeStopDownloading:(BOOL)a1;
- (BOOL)ignoreDownloadActionIfInRetailDemoMode;
- (void)_askUserAndDeleteIfNeeded;
- (void)_showDownloadingInfoDialog;
- (id)_renewalAlertAction;
- (BOOL)_shouldShowRenewalOption;
- (void)_startDownloadIfPossibleRemovingFromUIOnCancellationOrFailure:(BOOL)a0;
- (void)_checkForAccountSignInWithCompletionHandler:(id /* block */)a0;
- (void)_dismissConfirmationAlertController;
- (id)_localize:(id)a0 token:(id)a1 value:(id)a2;

@end

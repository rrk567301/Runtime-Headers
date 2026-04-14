@class TUIKTLearnMoreRemoteViewControllerHost;

@interface TUIKTLearnMoreViewController : NSViewController {
    TUIKTLearnMoreRemoteViewControllerHost *_remoteViewControllerHost;
}

- (void)loadView;
- (void)dealloc;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)_connectToRemoteServiceWithCompletion:(id /* block */)a0;
- (void)_showRemoteServicePrivacySheet;
- (void)closeRemoteServiceConnection;
- (void)presentWithPresentingWindow:(id)a0;

@end

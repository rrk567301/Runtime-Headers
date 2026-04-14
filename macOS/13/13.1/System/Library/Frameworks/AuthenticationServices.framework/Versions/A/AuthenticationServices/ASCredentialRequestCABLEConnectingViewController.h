@class NSTimer, NSProgressIndicator, NSTextField;

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    NSTimer *_informativeTextTimer;
    NSProgressIndicator *_activityIndicator;
    NSTextField *_informativeTextLabel;
}

- (void).cxx_destruct;
- (id)_informativeText;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)initRequiringTableView:(BOOL)a0;
- (id)_connectingText;
- (void)_startInformativeTextTimerIfNeeded;
- (void)_showInformativeText;
- (void)_setUpInformativeTextLabel;
- (id)_informativeTextFont;

@end

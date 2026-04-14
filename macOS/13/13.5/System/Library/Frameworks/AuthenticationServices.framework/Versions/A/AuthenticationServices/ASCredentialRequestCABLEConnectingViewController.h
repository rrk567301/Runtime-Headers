@class NSTimer, NSProgressIndicator, NSTextField;

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    NSTimer *_informativeTextTimer;
    NSProgressIndicator *_activityIndicator;
    NSTextField *_informativeTextLabel;
}

- (void).cxx_destruct;
- (id)_informativeText;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)_connectingText;
- (id)_informativeTextFont;
- (void)_setUpInformativeTextLabel;
- (void)_showInformativeText;
- (void)_startInformativeTextTimerIfNeeded;
- (id)initRequiringTableView:(BOOL)a0;

@end

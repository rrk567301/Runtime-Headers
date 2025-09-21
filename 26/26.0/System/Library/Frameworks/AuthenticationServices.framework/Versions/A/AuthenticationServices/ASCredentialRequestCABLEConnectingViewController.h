@class NSTimer, NSProgressIndicator, NSTextField;

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    NSTimer *_informativeTextTimer;
    NSProgressIndicator *_activityIndicator;
    NSTextField *_informativeTextLabel;
}

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)_informativeText;
- (id)_connectingText;
- (id)_informativeTextFont;
- (void)_setUpInformativeTextLabel;
- (void)_showInformativeText;
- (void)_startInformativeTextTimerIfNeeded;

@end

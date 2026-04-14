@class NSTimer, NSProgressIndicator, NSTextField;

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    NSTimer *_informativeTextTimer;
    NSProgressIndicator *_activityIndicator;
    NSTextField *_informativeTextLabel;
}

- (void)viewDidAppear;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)_informativeText;
- (id)_connectingText;
- (id)_informativeTextFont;
- (void)_setUpInformativeTextLabel;
- (void)_showInformativeText;
- (void)_startInformativeTextTimerIfNeeded;

@end

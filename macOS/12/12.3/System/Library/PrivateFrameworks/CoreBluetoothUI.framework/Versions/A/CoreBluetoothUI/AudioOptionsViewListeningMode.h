@class NSButton, NSTimer, NSTextField;

@interface AudioOptionsViewListeningMode : AudioOptionsViewController {
    NSTimer *unlockTimer;
    BOOL buttonsLocked;
    BOOL mReady;
}

@property NSButton *imageButtonNormal;
@property NSButton *textButtonNormal;
@property NSButton *imageButtonANC;
@property NSButton *textButtonANC;
@property NSTextField *legendANC;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)loadPrefs;
- (void)handleClose;
- (void)hideANC;
- (void)setToggleButtonState:(id)a0 state:(BOOL)a1;
- (void)deviceToDisplay;
- (void)setListeningStateDisplay:(unsigned char)a0;
- (unsigned char)listeningStateDisplay;
- (void)unlockButtons;
- (void)displayToDevice;
- (void)lockButtons;
- (void)setListeningModeOnDevice:(unsigned char)a0;
- (void)setNormalListeningMode:(id)a0;
- (void)setANCListeningMode:(id)a0;
- (void)handleNormalTextButtonClick:(id)a0;
- (void)handleANCTextButtonClick:(id)a0;

@end

@class NSButton;

@interface AudioOptionsViewNoiseControl : AudioOptionsViewController

@property NSButton *cbNormal;
@property NSButton *cbANC;
@property NSButton *cbAwareness;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)hideANC;
- (void)hideAwareness;
- (unsigned int)listeningModeConfigsDisplay;
- (void)setListeningModeConfigsDisplay:(unsigned int)a0;
- (void)setToggleButtonState:(id)a0 state:(BOOL)a1;
- (void)setListeningModeConfigsForNormal:(BOOL)a0 anc:(BOOL)a1 awareness:(BOOL)a2;
- (BOOL)isNormalOn;
- (BOOL)isANCOn;
- (BOOL)isAwarenessOn;
- (void)toggleNormal;
- (void)toggleANC;
- (void)toggleAwareness;
- (void)toggleNormalListeningMode:(id)a0;
- (void)toggleANCListeningMode:(id)a0;
- (void)toggleAwarenessListeningMode:(id)a0;

@end

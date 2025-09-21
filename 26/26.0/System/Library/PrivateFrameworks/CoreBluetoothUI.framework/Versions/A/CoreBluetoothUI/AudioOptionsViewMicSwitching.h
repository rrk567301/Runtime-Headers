@class NSPopUpButton;

@interface AudioOptionsViewMicSwitching : AudioOptionsViewController

@property NSPopUpButton *microphoneButton;

+ (BOOL)peerHasViews:(id)a0;

- (void)viewDidLoad;
- (id)init;
- (void)loadPrefs;
- (void)handleMenu:(id)a0;
- (id)viewsToAlign;

@end

@class NSPopUpButton;

@interface AudioOptionsViewMicSwitching : AudioOptionsViewController

@property NSPopUpButton *microphoneButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)handleMenu:(id)a0;

@end

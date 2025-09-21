@class NSButton;

@interface AudioOptionsViewMagneticEarbudsControl : AudioOptionsViewController

@property NSButton *autoAnswerCB;

+ (BOOL)peerHasViews:(id)a0;

- (void)viewDidLoad;
- (id)init;
- (void)loadPrefs;
- (void)handleAutoAnswer:(id)a0;
- (id)viewsToAlign;

@end

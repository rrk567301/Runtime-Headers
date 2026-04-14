@class NSPopUpButton;

@interface AudioOptionsViewDoubleTap : AudioOptionsViewController

@property NSPopUpButton *doubleTapButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)handleMenu:(id)a0;
- (void)setupPopUp:(id)a0;
- (id)clickOptions;
- (id)keyForDoubleTap:(unsigned short)a0;

@end

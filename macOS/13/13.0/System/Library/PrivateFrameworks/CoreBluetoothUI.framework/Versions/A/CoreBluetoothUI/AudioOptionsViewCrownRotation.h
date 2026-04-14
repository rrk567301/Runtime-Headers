@class NSPopUpButton;

@interface AudioOptionsViewCrownRotation : AudioOptionsViewController

@property NSPopUpButton *crownRotationDirectionButton;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)handleMenu:(id)a0;
- (id)clickOptions;
- (void)setupPopUp:(id)a0;
- (id)keyForRotation:(unsigned char)a0;

@end
